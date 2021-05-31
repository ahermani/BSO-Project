CC := gcc
CFLAGS = -Wall -Wextra -no-pie -fno-stack-protector #-Ofast -march=native
LDFLAGS = -no-pie -fno-stack-protector 
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

.PHONY: pie
pie:
	$(MAKE) CFLAGS="-fno-stack-protector" LDFLAGS="-fno-stack-protector"

.PHONY: canary
canary:
	$(MAKE) CLFAGS="-no-pie -fstack-protector" LDFLAGS="-no-pie -fstack-protector"

.PHONY: rebuild
rebuild:
	$(MAKE) clean
	$(MAKE)


