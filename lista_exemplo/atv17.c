#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char ids[BUFFER_SIZE], nome[BUFFER_SIZE], *endptr;

	printf("Informe o seu nome: ");
	fgets(nome, BUFFER_SIZE, stdin);

	printf("Informe a sua idade: ");
	fgets(ids, BUFFER_SIZE, stdin);

	nome[strcspn(nome, "\n")] = 0;
	int id = strtol(ids, &endptr, 10);

	if (id < 10) {
		printf("Olá %s, o seu plano irá custar R$30.00\n", nome);
	} else if (id < 29) {
		printf("Olá %s, o seu plano irá custar R$60.00\n", nome);
	} else if (id < 45) {
		printf("Olá %s, o seu plano irá custar R$120.00\n", nome);
	} else if (id < 59) {
		printf("Olá %s, o seu plano irá custar R$150.00\n", nome);
	} else if (id < 65) {
		printf("Olá %s, o seu plano irá custar R$250.00\n", nome);
	} else {
		printf("Olá %s, o seu plano irá custar R$400.00\n", nome);
	}

	return 0;
}
