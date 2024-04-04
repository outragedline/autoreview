#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char nascs[BUFFER_SIZE];
	char *endptr;
	printf("Em que anos você nasceu? ");
	fgets(nascs, BUFFER_SIZE, stdin);

	int nasc = strtol(nascs, &endptr, 10);
	int id = ANO_ATUAL - nasc;
	if (nasc > ANO_ATUAL) {
		printf("Data de nascimento inválida!\n");
	} else if (id >= 18) {
		printf("Você é maior de idade\n");
		if (id >= 65) {
			printf("Você é maior de 65 anos\n");
		}
	} else {
		printf("Você é idade de idade\n");
	}
	return 0;
}
