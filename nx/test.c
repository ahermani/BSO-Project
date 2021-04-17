#include <stdio.h>

int main(int argc, char *argv[], char *envp[]) {
	int *rsp;

	printf("env: %p\narg: %p\nrsp: %p\n", envp, argv, &rsp);
	while (*envp != NULL) {
		printf("%s\n", *envp);
		++envp;
	}

	return 0;
}
