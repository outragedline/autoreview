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
	char narrs[3][BUFFER_SIZE];
	int tmp;
	printf("Digite o 1º numero: ");
	fgets(narrs[0], BUFFER_SIZE, stdin);

	printf("Digite o 2º numero: ");
	fgets(narrs[1], BUFFER_SIZE, stdin);

	printf("Digite o 3º numero: ");
	fgets(narrs[2], BUFFER_SIZE, stdin);

	int narr[3];
	char *endptr;
	narr[0] = strtol(narrs[0], &endptr, 10);
	narr[1] = strtol(narrs[1], &endptr, 10);
	narr[2] = strtol(narrs[2], &endptr, 10);

	insort(narr, 3);

	printf("%d\n", narr[2]);
	return 0;
}
