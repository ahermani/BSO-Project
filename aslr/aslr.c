#include <stdio.h>
#include <string.h>

void getInput()
{
	char buff[256];
	gets(buff);
	printf(buff);
}
int main()
{
	getInput();
	printf("Thank you for uour input\n");

	return (0);
}

