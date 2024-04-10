#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50

int main(int argc, char *argv[])
{
	char xs[BUFFER_SIZE], ys[BUFFER_SIZE];
	char *endptr;
	printf("Insira um numero: ");
	fgets(xs, BUFFER_SIZE, stdin);

	printf("Insira outro numero: ");
	fgets(ys, BUFFER_SIZE, stdin);

	int x = strtol(xs, &endptr, 0);
	int y = strtol(ys, &endptr, 0);
	int z = x + y;

	if (z > 10) {
		printf("A soma entre %d e %d é %d\n", x, y, z);
	}

	return 0;
}
