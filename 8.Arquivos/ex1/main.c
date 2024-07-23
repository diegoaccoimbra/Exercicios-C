#include <stdio.h>
#include <string.h>

void contar_palavras(char str[]);

int main() {

    FILE *arq;
    char minha_string[100];

    arq = fopen("meu_arquivo.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return -1;
    }

    while (fgets(minha_string, 100, arq) != NULL) {
        printf("%s", minha_string);
    }

    contar_palavras(minha_string);
    
    fclose(arq);

    return 0;
}

void contar_palavras(char str[]) {
    int tamanho_string = strlen(str);
    int quantidade_de_palavras = 0, quantidade_de_caracteres = 0;

    for (int i = 0; i < tamanho_string; i++) {
        //printf("\nCaractere %d: %c:", i, str[i]);
        
        // Conta a quantidade de palavras com base na quantidade de espaços na string.
        // Verifica se o caractere é igual ao vazio e o seguinte é diferente ou se o caractere é o último.
        if ((str[i] == ' ' && i != 0 && str[i + 1] != ' ') || (str[i] != ' ' && str[i + 1] == '\0')) {
            quantidade_de_palavras++;
        }
        // Se o caractere for diferente de vazio, ele soma na quantidade de caracteres.
        if (str[i] != ' ') {
            quantidade_de_caracteres++;
        }
    }
    printf("\nQuantidade de palavras: %d\nQuantidade de caracteres: %d", quantidade_de_palavras, quantidade_de_caracteres);
}