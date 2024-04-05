#include <stdio.h>

int main() {
  int num1, num2, soma;

  // Leitura dos dois valores inteiros
  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);
  printf("Digite o segundo valor: ");
  scanf("%d", &num2);

  // Soma dos dois valores
  soma = num1 + num2;

  // Aplicação de regras
  if (soma > 20) {
    soma += 8;
    printf("A soma é: %d\n", soma);
  } else {
    soma -= 5;
    printf("A soma é: %d\n", soma);
  }

  return 0;
}
