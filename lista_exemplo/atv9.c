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
	if (nasc > ANO_ATUAL) {
		printf("Data de nascimento inválida!\n");
	} else {
		printf("Você tem %d anos\n", ANO_ATUAL - nasc);
	}
	return 0;
}
