#include <stdio.h>

int main() {

  int num_linhas;

  printf("Número de linhas: ");
  scanf("%d", &num_linhas);

  for (int i = 1; i <= num_linhas; i++) {
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}