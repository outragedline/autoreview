#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char kms[BUFFER_SIZE], type, *endptr;
	int div;

	printf("Informe o percurso em KMs: ");
	fgets(kms, BUFFER_SIZE, stdin);

	int km = strtol(kms, &endptr, 10);

	printf("Informe seu tipo de carro: ");
	type = getchar(); // eu deveria ter lembrado da existencia disso mais cedo

	switch (type) {
	case 'A':
	case 'a':
		div = 12;
		break;
	case 'B':
	case 'b':
		div = 9;
		break;
	case 'C':
	case 'c':
		div = 8;
		break;
	default:
		printf("Opção invalida\n");
	}

	printf("Você irá precisar de %.2f litros de gasolina para completar o percurso!\n",
	       (double)km / div);
	return 0;
}
