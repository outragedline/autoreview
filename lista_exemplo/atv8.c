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

	if (x > 20) {
		printf(" maior que 20\n");
	} else if (x < 20) {
		printf(" menor que 20\n");
	} else {
		printf("igual a 20\n");
	}

	return 0;
}
