#include <stdio.h>

int busca_2(int vetor[], int tamanho_vetor, int chave_busca);

int main(void) {
    int minha_lista[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d", busca_2(minha_lista, 10, 4));  
  
    return 0;
}

// A função abaixo realiza a pesquisa vendo se o item buscado está mais próximo de um "lado" do vetor do que outro. Assim, a função tem um desempenho maior porque não realiza uma busca em todos os itens como a função busca_1 do enunciado realiza. A função busca_2 reduz o tamanho do vetor pela metade a cada loop, não percorrendo assim todos os índices.

int busca_2(int vetor[], int tamanho_vetor, int chave_busca) {

    // Definindo início e fim (subtrai 1 do tamanho do vetor para ficar certo com os índices do array)
    int inicio = 0;
    int fim = tamanho_vetor - 1;

    // Loop pra realizar a busca. A cada iteração o espaço de busca do array diminui pela metade.
    while(inicio <= fim) {

        // Definindo o índice como o meio do array
        int i = (inicio + fim) / 2;

        // Se o item do meio do array for o que é buscado, ele retorna o índice
        if(vetor[i] == chave_busca) {
            return i;
        }

        // Caso o item do meio do array for menor que o item buscado, é porque o item está acima do meio do array até o fim. Assim, definimos o novo inicio a partir do próximo item
        if(vetor[i] < chave_busca) {
            inicio = i + 1;
        }

        // Caso o item do meio do array seja maior que o item buscado, significa que o item buscado está entre o início e o item antes do item do meio.
        else {
            fim = i - 1;
        }
    }
    return -1;
}