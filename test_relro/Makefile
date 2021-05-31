CC := gcc
CFLAGS = -lm -z execstack -Wl,-z,norelro -fno-stack-protector -no-pie#-Ofast -march=native
LDFLAGS = -lm -z execstack -Wl,-z,norelro -fno-stack-protector -no-pie
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

.PHONY: relro
relro:
	$(MAKE) CFLAGS="-lm -z execstack -Wl,-z,relro,-z,now -fno-stack-protector -no-pie" LDFLAGS="-lm -z execstack -Wl,-z,relro,-z,now -fno-stack-protector -no-pie"

.PHONY: rebuild
rebuild:
	$(MAKE) clean
	$(MAKE)


