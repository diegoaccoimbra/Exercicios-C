#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

int main() {
  int numero, *vetor, soma = 0, limite = 20;
  
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  // Alocando o espaço pro vetor de "numero" inteiros.
  vetor = malloc(sizeof(int) * numero);

  // Preenchendo o vetor.  
  srand(time(0));
  for (int i = 0; i < numero; i++) {
    vetor[i] = rand() % 10;
    soma += vetor[i];
  }

  // Exibindo o vetor.
  printf("\nVetor:\n");
  for (int i = 0; i < numero; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\nA soma dos elementos do vetor é %d", soma);

  // Realocando o vetor caso a soma seja maior que o limite estabelecido.
  if (soma > limite) {
    int novo_tamanho = numero + (numero / 2);
    vetor = realloc(vetor, sizeof(int) * novo_tamanho);

    // Preenchendo o restante do novo vetor.
    for (int i = numero; i < novo_tamanho; i++) {
      vetor[i] = rand() % 10;
      soma += vetor[i];
    }

    // Exibindo o novo vetor.
    printf("\nNovo vetor:\n");
    for (int i = 0; i < novo_tamanho; i++) {
      printf("%d ", vetor[i]);
    }
    
    printf("\nA soma dos elementos do novo vetor é %d", soma);
  }
  
  return 0;
}