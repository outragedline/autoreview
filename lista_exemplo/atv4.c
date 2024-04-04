#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50

int main(int argc, char *argv[])
{
	char xs[BUFFER_SIZE];
	char *endptr;
	printf("Insira um numero: ");
	fgets(xs, BUFFER_SIZE, stdin);
	int x = strtol(xs, &endptr, 0);

	if (x % 5 == 0) {
		printf("É divisvel por 5\n");
	} else {
		printf("Não é divisvel por 5\n");
	}

	return 0;
}
