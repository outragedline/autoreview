#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	char user[BUFFER_SIZE], type[BUFFER_SIZE];

	printf("Informe seu nome de usuário: ");
	fgets(user, BUFFER_SIZE, stdin);

	printf("Informe seu tipo de usuário P=Professor A=Aluno: ");
	fgets(type, BUFFER_SIZE, stdin);

	user[strcspn(user, "\n")] = 0;
	switch (type[0]) {
	case 'P':
	case 'p':
		printf("Olá professor %s, você tem 10 dias para aproveitar a leitura!\n",
		       user);
		break;

	case 'A':
	case 'a':
		printf("Olá aluno %s, você tem 3 dias para aproveitar a leitura!\n",
		       user);
		break;

	default:
		printf("Opção invalida\n");
	}
	return 0;
}
