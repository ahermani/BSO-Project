#include <stdio.h>
#include <string.h>

char password[20] = "admin123";
void get_access()
{
	printf("Congratulations! You got access\n");
}
void vuln_func()
{

	char input[30];

	gets(input);

	if (strncmp(input, password, sizeof(password))==0) {
		printf("correct!\n");
		get_access();
	} else {
		printf("wrong!\n");
	}
}

int main()
{
	vuln_func();
	return 0;
}

