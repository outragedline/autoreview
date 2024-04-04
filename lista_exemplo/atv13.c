#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char nome[BUFFER_SIZE], p1s[BUFFER_SIZE], p2s[BUFFER_SIZE];
	printf("Qual o nome do aluno? ");
	fgets(nome, BUFFER_SIZE, stdin);

	printf("Qual a nota da prova 1? ");
	fgets(p1s, BUFFER_SIZE, stdin);

	printf("Qual a nota da prova 2? ");
	fgets(p2s, BUFFER_SIZE, stdin);

	char *endptr;

	int p1 = strtol(p1s, &endptr, 10);
	int p2 = strtol(p2s, &endptr, 10);

	int media = (p1 + p2) / 2;

	// serve pra tirar o \n da string nome, senão o printf pula linha onde não deveria
	nome[strcspn(nome, "\n")] = 0;
	printf("O aluno %s tirou as seguintes notas:\n", nome);
	printf("Prova 1: %d\n", p1);
	printf("Prova 2: %d\n", p2);
	printf("Media: %d\n", media);
	return 0;
}
