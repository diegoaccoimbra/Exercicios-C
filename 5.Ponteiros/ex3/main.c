#include <stdio.h>

int main () {
  
    int numeros[] = {1, 2, 3, 4, 5};
    int *ptr_numeros;
    int soma = 0;
    int tamanho_do_array = sizeof(numeros) / sizeof(numeros[0]);

    ptr_numeros = numeros; // O mesmo que ptr_numeros = &numeros[0]

    for (int i = 0; i < tamanho_do_array; i++) {
        soma += *ptr_numeros;
        ptr_numeros++;
    }

    printf("A soma dos elementos do array é %d\n", soma);
  
  return 0;
}