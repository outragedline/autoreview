#include <stdio.h>

int main() {
  int num;

  // Leitura do número
  printf("Digite um número: ");
  scanf("%d", &num);

  // Verificação se o número é múltiplo de 3
  if (num % 3 == 0) {
    printf("É múltiplo de 3\n");
  } else {
    printf("Não é múltiplo de 3\n");
  }

  return 0;
}
