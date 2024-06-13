#include <stdio.h>

int main() {
  int numero;
  
  printf("Digite um número: ");
  scanf("%d", &numero);

  if(numero % 2 == 0) {
    printf("\n%d é par", numero);
  }
  else {
    printf("\n%d é ímpar", numero);
  }
  
  return 0;
}