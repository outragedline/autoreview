#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char ids[BUFFER_SIZE], *endptr;

	printf("Informe a sua idade: ");
	fgets(ids, BUFFER_SIZE, stdin);

	int id = strtol(ids, &endptr, 10);

	if (id < 5) {
		printf("Você ainda não pode participar do campeonato\n");
	} else if (id < 7) {
		printf("Categoria: infantil A\n");
	} else if (id < 10) {
		printf("Categoria: infantil B\n");
	} else if (id < 13) {
		printf("Categoria: juvenil A\n");
	} else if (id < 17) {
		printf("Categoria: juvenil B\n");
	} else {
		printf("Categoria: senior\n");
	}

	return 0;
}
