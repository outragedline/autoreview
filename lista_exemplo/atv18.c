#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char ns[BUFFER_SIZE], *endptr;

	printf("Informe um numero: ");
	fgets(ns, BUFFER_SIZE, stdin);

	int n = strtol(ns, &endptr, 10);

	switch (n) {
	case 1:
		printf("O mês correspondente é janeiro!\n");
		break;

	case 2:
		printf("O mês correspondente é fevereiro!\n");
		break;
	case 3:
		printf("O mês correspondente é março!\n");
		break;
	case 4:
		printf("O mês correspondente é abril!\n");
		break;
	case 5:
		printf("O mês correspondente é maio!\n");
		break;
	case 6:
		printf("O mês correspondente é junho!\n");
		break;
	case 7:
		printf("O mês correspondente é julho!\n");
		break;
	case 8:
		printf("O mês correspondente é agosto!\n");
		break;
	case 9:
		printf("O mês correspondente é setembro!\n");
		break;
	case 10:
		printf("O mês correspondente é outubro!\n");
		break;
	case 11:
		printf("O mês correspondente é novembro!\n");
		break;
	case 12:
		printf("O mês correspondente é dezembro!\n");
		break;
	default:
		printf("Opção invalida!\n");
	}
	return 0;
}
