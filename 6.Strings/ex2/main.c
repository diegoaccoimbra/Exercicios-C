#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50], palavra_contraria[50];

    printf("Insira uma palavra: ");
    scanf("%s", palavra);

    int tamanho_string = strlen(palavra);
    int j = 0;

    // Percorrendo a string "palavra" de trás pra frente e adicionando cada caractere na string "palavra_contraria".
    for (int i = tamanho_string - 1; i >= 0; i--) {
        palavra_contraria[j] = palavra[i];
        j++;
    }

    // Adicionando o caractere nulo no final da nova string.
    palavra_contraria[j] = '\0';

    printf("\nPalavra: %s \nPalavra ao contrário: %s", palavra, palavra_contraria);

    // Verificando se a palavra é palíndromo.
    int resultado = strcmp(palavra, palavra_contraria);
    if (resultado == 0) {
        printf("\nÉ palíndromo");
    }
    else {
        printf("\nNão é palíndromo");
    }

    return 0;
}