#include <stdio.h>
#include <string.h>

void sayHello(char *arg1)
{
	char name[100];
	strcpy(name, arg1);
	printf("Hello %s\n", name);
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		printf("Hello, noname");
	}

	sayHello(argv[1]);

	return 0;
}
