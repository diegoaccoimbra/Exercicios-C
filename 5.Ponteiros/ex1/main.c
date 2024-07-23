#include <stdio.h>

void valor_abs(int *x);

int main() {

    int numero, *numeroPtr;

    numeroPtr = &numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    valor_abs(numeroPtr);
    
    printf("\nO valor absoluto é %d", *numeroPtr);
    
    return 0;
}

void valor_abs(int *x) {
  if (*x < 0) {
    *x *= (-1);
  } 
}