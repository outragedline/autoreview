#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char vals[BUFFER_SIZE], *endptr;

	printf("Informe o  valor do produto: ");
	fgets(vals, BUFFER_SIZE, stdin);

	double val = strtod(vals, &endptr);

	if (val < 20) {
		printf("O produto será vendido a %.2f", val + val * 0.45);
	} else {
		printf("O produto será vendido a %.2f", val + val * 0.3);
	}

	return 0;
}
