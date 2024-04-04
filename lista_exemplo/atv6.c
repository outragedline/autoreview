#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
int main(int argc, char *argv[])
{
	char sals[BUFFER_SIZE], prests[BUFFER_SIZE];
	char *endptr;

	printf("Qual o seu salario? ");
	fgets(sals, BUFFER_SIZE, stdin);

	printf("Qual o valor da prestação? ");
	fgets(prests, BUFFER_SIZE, stdin);

	double sal = strtod(sals, &endptr);
	double prest = strtod(prests, &endptr);

	if (prest > sal * 0.3) {
		printf("Seu emprestimo foi negado!\n");
	} else {
		printf("Seu emprestimo foi aprovado!\n");
	}
	return 0;
}
