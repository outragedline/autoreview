#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char sals[BUFFER_SIZE], *endptr;

	printf("Informe o salário do contribuinte: ");
	fgets(sals, BUFFER_SIZE, stdin);

	double sal = strtod(sals, &endptr);

	if (sal <= 600) {
		printf("O contribuinte está isento do desconto do INSS\n");
	} else if (sal <= 1200) {
		printf("Serão descontados %.2f reais do salario do contribuinte, correspondendo a 20%% de desconto\n",
		       sal * 0.2);
	} else if (sal <= 2000) {
		printf("Serão descontados %.2f reais do salario do contribuinte, correspondendo a 25%% de desconto\n",
		       sal * 0.25);
	} else {
		printf("Serão descontados %.2f reais do salario do contribuinte, correspondendo a 30%% de desconto\n",
		       sal * 0.3);
	}
	return 0;
}
