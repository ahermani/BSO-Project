CC := g++
CFLAGS = -fno-stack-protector -z execstack -Wl,-z,norelro -no-pie#-Ofast -march=native
LDFLAGS = -fno-stack-protector -no-pie -z execstack -Wl,-z,norelro
SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)
OUT := out

$(OUT): $(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -c -o $@
.PHONY: clean
clean:
	rm -f $(OUT)
	rm -f $(OBJ)

.PHONY: canary
canary:
	$(MAKE) CFLAGS="-fstack-protector-all -z execstack -Wl,-z,norelro -no-pie" LDFLAGS="-fstack-protector-all -no-pie -z execstack -Wl,-z,norelro"

.PHONY: rebuild
rebuild:
	$(MAKE) clean
	$(MAKE)


