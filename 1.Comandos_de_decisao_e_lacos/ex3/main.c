#include <stdio.h>

int main() {

  int numeros[3];
  int aux;

  for(int i = 0; i < 3; i++) {
    printf("\nDigite um número: ");
    scanf("%d", &numeros[i]);
  }

  for(int j = 1; j < 3; j++) {
    for(int k = 0; k < 2; k++) {
      if (numeros[k] > numeros[k + 1]) {
        aux = numeros[k];
        numeros[k] = numeros[k + 1];
        numeros[k + 1] = aux;
      }
    }
  }

  for(int l = 0; l < 3; l++) {
    printf("%d ", numeros[l]);
  }

  printf("\nO maior número é %d", numeros[2]);
  
  return 0;
}