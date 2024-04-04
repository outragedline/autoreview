#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 50
#define ANO_ATUAL 2024

void insort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main(int argc, char *argv[])
{
	char *endptr, ptarrs[3][BUFFER_SIZE];

	printf("Informe a pontuação do 1º jogador: ");
	fgets(ptarrs[0], BUFFER_SIZE, stdin);

	printf("Informe a pontuação do 2º jogador: ");
	fgets(ptarrs[1], BUFFER_SIZE, stdin);

	printf("Informe a pontuação do 3º jogador: ");
	fgets(ptarrs[2], BUFFER_SIZE, stdin);

	int ptarr[3];
	ptarr[0] = strtol(ptarrs[0], &endptr, 10);
	ptarr[1] = strtol(ptarrs[1], &endptr, 10);
	ptarr[2] = strtol(ptarrs[2], &endptr, 10);

	insort(ptarr, 3);

	printf("Pontuação:\n");
	for (int i = 2; i >= 0; i--) {
		printf("%d\n", ptarr[i]);
	}

	int sum = ptarr[0] + ptarr[1] + ptarr[2];
	if (sum > 100) {
		printf("A média de pontos foi: %.2f\n", (double)sum / 3);
	} else {
		printf("Equipe desclassificada\n");
	}
	return 0;
}
