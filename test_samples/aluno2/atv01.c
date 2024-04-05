#include <stdio.h>

int main(void) {
  int num1, num2, soma;

  printf("Digite o primeiro valor: \n");
  scanf("%d", &num1);

  printf("Digite o segundo valor: \n");
  scanf("%d", &num2);

  soma = (num1 + num2);

  if (soma > 10){
    printf("\nO resultado da soma é: %d", soma);
  }
  else{
    printf("\nSua soma está abaixo de 10.\n");
  
  }
  return 0;
}