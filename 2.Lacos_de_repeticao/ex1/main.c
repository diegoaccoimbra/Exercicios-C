#include <stdio.h>

int main() {
  int numero, digito;
  
  printf("Digite um número com mais de uma casa decimal: ");
  scanf("%d", &numero);

  printf("\nExibindo o número em ordem inversa: ");
  while(numero > 0) {
    digito = numero % 10;
    numero = numero / 10;
    printf("%d", digito);
  }
  
  return 0;
}