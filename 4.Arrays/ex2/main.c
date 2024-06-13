#include <stdio.h>

void empurrar_zero(int array[], int tamanho);

int main() {
  int meu_array[] = {1, 2, 0, 4, 3, 0, 5, 0};
  // sizeof() retorna o número em bytes. Cada variável equivale a 4 bytes.
  int tamanho = sizeof(meu_array) / sizeof(meu_array[0]);

  empurrar_zero(meu_array, tamanho);
  
  return 0;
}

void empurrar_zero(int array[], int tamanho) {

  int novo_array[tamanho];
  int j = 0;

  // Adicionando os elementos diferentes de zero no novo array.
  for (int i = 0; i < tamanho; i++) {  
    if (array[i] != 0) {
      novo_array[j] = array[i];
      j++;
    }
  }

  // Adicionando os zeros no final do novo array.
  for (int i = 0; i < tamanho; i++) {
    if (array[i] == 0) {
      novo_array[j] = array[i];
      j++;
    }
  }
  
  // Imprimindo o novo array
  printf("Novo array:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", novo_array[i]);
  }
}