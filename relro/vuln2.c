#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void secret()
{
	printf("I am a very secret function");
	exit(1);
}

void get ()
{
	char buff[512];
	fgets(buff, sizeof(buff), stdin);
	printf(buff);
	_exit(1);
}

int main()
{
	get();
	return 0;
}
