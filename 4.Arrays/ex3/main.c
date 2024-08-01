#include <stdio.h>

int main() {
    int tamanho;

    printf("Insira no número de elementos a serem armazenados no array: ");
    scanf("%d", &tamanho);

    int numeros[tamanho];
    
    printf("\nInsira %d elementos no array: \n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    
    // Verificando se há elementos repetidos
    int quantidade_de_duplicados = 0;
    int novo_vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] == numeros[j]) {
                quantidade_de_duplicados++;
            }
        }
    }
    printf("\nNúmero total de elementos duplicados é: %d", quantidade_de_duplicados);
    
    return 0;
}
