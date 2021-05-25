CC := gcc
CFLAGS = -Wall -Wextra -no-pie -fno-stack-protector -z execstack -masm=intel#-Ofast -march=native
LDFLAGS = -no-pie -fno-stack-protector -z execstack -masm=intel
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
	$(MAKE) CFLAGS="-fno-stack-protector -z execstack -masm=intel" LDFLAGS="-fno-stack-protector -z execstack -masm=intel"

.PHONY: rebuild
rebuild:
	$(MAKE) clean
	$(MAKE)


