#include <stdio.h>

void rotacionar_array(int array[], int n, int tamanho);

int main() {
    int n = 3;
    int tamanho = 0;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
        tamanho += 1;
    }

    printf("\nTamanho do array: %d\n", tamanho);
    rotacionar_array(array, n, tamanho);

    return 0;
}

void rotacionar_array(int array[], int n, int tamanho) {

    int novo_array[tamanho];

    // Adicionando os elementos que não são rotacionados no novo array
    for (int i = 0; i < tamanho; i++) {
        novo_array[i] = array[n + i];
    }

  // Adicionando os elementos rotacionados
    for (int i = 0; i < n; i++) {
        novo_array[(tamanho - n) + i] = array[i];
    }

    // Mostrando o novo array
    printf("Array rotacionado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", novo_array[i]);
    }
}
