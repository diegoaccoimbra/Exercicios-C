#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int ordem = 3;
  int matriz[ordem][ordem];
  int diagonal = 1;

  srand(time(0));

  // Gerando a matriz aleatória
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      matriz[i][j] = rand() % 10;
    }
  }

  // Exibindo a matriz
  printf("\nMatriz gerada:\n");
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  // Multiplicando a diagonal
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      if (i == j) {
        diagonal *= matriz[i][j];
      }
    }
  }
  printf("\nMultiplicação da diagonal é igual a %d", diagonal);
  
  return 0;
}
