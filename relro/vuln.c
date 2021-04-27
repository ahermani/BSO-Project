#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[256];
	puts("Tell me sth I don't know\n");
	fgets(buffer, sizeof(buffer), stdin);
	printf(buffer);
	memset(buffer, 0, sizeof(buffer));
	puts("Try again");
	fgets(buffer, sizeof(buffer), stdin);
	printf(buffer);
	return 0;
}

