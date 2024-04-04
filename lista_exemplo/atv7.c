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

	if (x > 20 && x < 50) {
		printf("O numero %d está entre 20 e 50\n", x);
	} else{

		printf("O numero %d não está entre 20 e 50\n", x);
	}

	return 0;
}
