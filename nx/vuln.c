// gcc vuln.c -o out -fno-stack-protector -z execstack
#include <stdio.h>
#include <string.h>

void vuln_func()
{
        char input[80];
        gets(input);

        printf("It is an honour to meet you, %s\n", input);
}
int main()
{
	int v;
	printf("Stack: %p\n", &v);
	puts("Hello adventurer, state your name");
	vuln_func();
        return 0;
}
