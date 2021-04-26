#include <stdio.h>

int secret;

int main()
{
	char buffer[32];

	puts("Wanna know a secret? Persuade me\n");
	gets(buffer);
	printf(buffer);

	if (secret)
		printf("Congrats! I'll tell you the secret\n");

	return 0;
}

