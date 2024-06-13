#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

void add_telefone(int* agenda, int numero, int posicao);

int main(void) {

  int numero_de_pessoas, *agenda;

  printf("Insira o número de pessoas a adicionar na agenda: ");
  scanf("%d", &numero_de_pessoas);

  // Alocando o espaço para o tamanho do array
  agenda = malloc(sizeof(int) * numero_de_pessoas);
  if (agenda == NULL) {
    return -1;
  }

  // Adicionando os telefones.
  srand(time(0));
  for (int i = 0; i < numero_de_pessoas; i++) {
    int telefone = 98900000 + (rand() % 100000);
    add_telefone(agenda, telefone, i);
  }

  // Exibindo a agenda.
  printf("---AGENDA---\n");
  for (int i = 0; i < numero_de_pessoas; i++) {
    printf("%d\n", agenda[i]);
  }
  
  return 0;
}

void add_telefone(int* agenda, int telefone, int posicao) {
  agenda[posicao] = telefone;
}