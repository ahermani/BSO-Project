CC := gcc
CFLAGS = -Wall -Wextra -m32 -fno-stack-protector #-Ofast -march=native
LDFLAGS = -m32 -fno-stack-protector
#LDFLAGS =
#LDFLAGS ?=
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
OUT := out

$(OUT): $(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@
.PHONY: clean
clean:
	rm -f $(OUT)
	rm -f $(OBJ)

.PHONY: canary
canary:
	$(MAKE) CFLAGS="-m32 -fstack-protector" LDFLAGS="-m32 -fstack-protector"

.PHONY: rebuild
rebuild:
	$(MAKE) clean
	$(MAKE)


