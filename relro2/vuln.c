#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char secretWord[] = "{SZFP%l9g4x2_w3f";

void shell()
{
	char buf[32];
	printf("Congrats! I'll tell you the secret. What do you want to know?\n");
	system("/bin/sh");
}

int main()
{
	char buffer[256];
	printf("Wanna know a secret? Persuade me!\n");
	gets(buffer, sizeof(buffer), stdin);
	printf("What you said: ");
	printf(buffer);

	if (strcmp(secretWord, buffer))
		printf("Oops, not very persuasive :(");
	else
		shell();
	return 0;
}

