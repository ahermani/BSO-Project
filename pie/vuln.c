#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buf[32];
	printf("Hello! Try and ROP me:\n");
	gets(buf);
}
