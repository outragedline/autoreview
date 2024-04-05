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

	if (x % 3 == 0) {
		printf("É multiplo de 3\n");
	} else {
		printf("Não é multiplo de 3\n");
	}

	return 0;
}
