#include <stdio.h>

int fatorial(n);
int soma_fatoriais(n);

int main() {
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);
  
  printf("\nO fatorial de %d é %d", numero, fatorial(numero));
  printf("\nA soma dos fatoriais de 1 a %d é %d", numero, soma_fatoriais(numero));
  
  return 0;
}

int fatorial(n) {
  if (n == 0) {
    return 1;
  }
  else {
    return n * fatorial(n - 1);
  }
}

int soma_fatoriais(n) {
  if (n == 0) {
    return 0;
  }
  else {
    return fatorial(n) + soma_fatoriais(n - 1);
  }
}