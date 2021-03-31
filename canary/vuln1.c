#include <signal.h>
#include <stdio.h>
#include <string.h>

void vuln_func()
{
	char password[30];
        char input[30];

        strncpy(password, "aaaaaaaaaaaa", 30);
        gets(input);

        if (0 == strncmp(input, password, 30)){
                printf("correct!\n");
        }else{
                printf("wrong!\n");
        }
        printf("Your input: %s\n", input);
        printf("Actual password: %s\n", password);
}
int main()
{
	vuln_func();
        return 0;
}
