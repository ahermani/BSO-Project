#include <signal.h>
#include <stdio.h>
#include <string.h>

void vuln_func()
{
	char password[20]="admin123";
        char input[30];
	
        gets(input);

        if (!strncmp(input, password, sizeof(password))){
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
