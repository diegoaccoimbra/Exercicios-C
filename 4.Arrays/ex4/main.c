#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int ordem = 3;
  int matriz[ordem][ordem];

  srand(time(0));

  // Gerando a matriz
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      matriz[i][j] = rand() % 10;
      //printf("\nInsira o elemento %dx%d: ", i, j);
      //scanf("%d", &matriz[i][j]);
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

  // Exibindo a matriz transposta
  printf("A transposta da matriz gerada:\n");
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      printf("%d ", matriz[j][i]);
    }
    printf("\n");
  }
  
  return 0;
}