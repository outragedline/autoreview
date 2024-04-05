#include <stdio.h>

int main() {
  int num;

  // Leitura do número
  printf("Digite um número: ");
  scanf("%d", &num);

  // Verificação se o número é divisível por 5
  if (num % 5 == 0) {
    printf("O número é divisível por 5.\n");
  } else {
    printf("O número não é divisível por 5.\n");
  }

  return 0;
}
