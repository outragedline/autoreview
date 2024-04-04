#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char *endptr, sals[BUFFER_SIZE];

	printf("Informe seu saldo médio no ultimo ano: R$ ");
	fgets(sals, BUFFER_SIZE, stdin);

	double sal = strtol(sals, &endptr, 10);

	if (sal < 500) {
		printf("Você não tem crédito!\n");
	} else if (sal < 1000) {
		printf("Você possui R$%.2f de crédito!\n", sal * 0.3);
	} else if (sal < 3000) {
		printf("Você possui R$%.2f de crédito!\n", sal * 0.4);
	} else {
		printf("Você possui R$%.2f de crédito!\n", sal * 0.5);
	}

	return 0;
}
