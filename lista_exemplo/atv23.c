#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

int main(int argc, char *argv[])
{
	int cal = 0, prato, sob, beb;
	printf("Qual será o prato principal?\n");
	printf("1- Vegetariano\n");
	printf("2- Peixe\n");
	printf("3- Frango\n");
	printf("4- Carne\n");
	prato = getchar();

	switch (prato) {
	case '1':
		cal += 180;
		break;
	case '2':
		cal += 230;
		break;
	case '3':
		cal += 250;
		break;
	case '4':
		cal += 350;
		break;

	default:
		printf("Opção inválida, abortando programa\n");
		return 1;
	}

	printf("Qual será a sobremesa?\n");
	printf("1- Abacaxi\n");
	printf("2- Sorvete diet\n");
	printf("3- Mousse diet\n");
	printf("4- Mousse chocolate\n");
	sob = getchar();

	switch (sob) {
	case '1':
		cal += 75;
		break;
	case '2':
		cal += 110;
		break;
	case '3':
		cal += 170;
		break;
	case '4':
		cal += 200;
		break;

	default:
		printf("Opção inválida, abortando programa\n");
		return 1;
	}

	printf("Qual será a bebida?\n");
	printf("1- Chá\n");
	printf("2- Suco de laranja\n");
	printf("3- Suco de melão\n");
	printf("4- Refrigerante diet\n");
	beb = getchar();

	switch (beb) {
	case '1':
		cal += 20;
		break;
	case '2':
		cal += 70;
		break;
	case '3':
		cal += 100;
		break;
	case '4':
		cal += 65;
		break;

	default:
		printf("Opção inválida, abortando programa\n");
		return 1;
	}

	printf("O total de calorias da sua refeição é: %d\n", cal);

	return 0;
}
