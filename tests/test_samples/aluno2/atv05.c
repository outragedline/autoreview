#include <stdio.h>

int main() {
  int num;

  // Leitura do número
  printf("Digite um número: ");
  scanf("%d", &num);

  // Verificação se o número é divisível por 3 e por 7
  if (num % 3 == 0 && num % 7 == 0) {
    printf("O número é divisível por 3 e por 7.\n");
  } else if (num % 3 == 0) {
    printf("O número é divisível por 3.\n");
  } else if (num % 7 == 0) {
    printf("O número é divisível por 7.\n");
  } else {
    printf("O número não é divisível por 3 nem por 7.\n");
  }

  return 0;
}
