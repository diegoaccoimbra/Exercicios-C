#include <stdio.h>
#include <string.h>

void encontra_palavra(char str[], char palavra[]);

int main() {

    char minha_string[100] = "cacau com banana", palavra_buscada[20] = "com";
    /*
    printf("Digite uma frase: ");
    fgets(minha_string, 100, stdin);
    
    printf("Palavra a ser buscada: ");
    scanf("%s", palavra_buscada);
    */
    //printf("\nFrase: %s \nPalavra: %s", minha_string, palavra_buscada);

    encontra_palavra(minha_string, palavra_buscada);

    return 0;
}

void encontra_palavra(char str[], char palavra[]) {
    char palavra_comparada[20];
    int j = 0;

    for (int i = 0; i < strlen(str); i++) {
        
        if (str[i] != ' ' || str[i] != '\0') {
            palavra_comparada[j] = str[i];
            printf("\npalavra_comparada[%d] = %c \nstr[%d] = %c", j, i, palavra_comparada[j], str[i]);
            printf("\n");
            j++;
        }
        else {
            int resultado = strcmp(palavra_comparada, palavra);
            if (resultado == 0) {
                printf("\nA palavra '%s' está na frase digitada.", palavra);
            }
        }
    }
}