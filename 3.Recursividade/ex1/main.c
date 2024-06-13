#include <stdio.h>
int soma_digitos(int n);

int main(void) {
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("%d", soma_digitos(numero));
  
  return 0;
}

int soma_digitos(int n) {

  if (n == 0) {
    return 0;
  }
  else {
    return (n % 10) + soma_digitos(n / 10);
  } 
}