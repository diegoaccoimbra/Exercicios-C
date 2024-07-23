#include <stdio.h>

int main() {

    FILE *arq_1, *arq_2, *arq_mesclado;
    char minha_string[100];

    arq_1 = fopen("arquivo_1.txt", "r");
    if (arq_1 == NULL) {
        printf("Erro ao abrir o arquivo 1!");
    }

    arq_2 = fopen("arquivo_2.txt", "r");
    if (arq_2 == NULL) {
        printf("Erro ao abrir o arquivo 2!");
    }

    // Criando o arquivo_mesclado.txt.
    arq_mesclado = fopen("arquivo_mesclado.txt", "w");
    if (arq_mesclado != NULL) {
        // Adicionando o conteúdo do arquivo_1.txt ao arquivo_mesclado.txt.
        while (fgets(minha_string, 100, arq_1) != NULL) {
            fputs(minha_string, arq_mesclado);
            //printf("%s", minha_string);
        }
        // Pulando uma linha entre os arquivos.
        fputs("\n", arq_mesclado);

        // Adicionando o conteúdo do arquivo_2.txt ao arquivo_mesclado.txt.
        while (fgets(minha_string, 100, arq_2) != NULL) {
            fputs(minha_string, arq_mesclado);
            //printf("%s", minha_string);
        }
    }
    fclose(arq_1);
    fclose(arq_2);
    fclose(arq_mesclado);

    // Abrindo o arquivo_mesclado.txt pra leitura.
    arq_mesclado = fopen("arquivo_mesclado.txt", "r");
    if (arq_mesclado == NULL) {
        printf("Erro ao abrir o arquivo mesclado");
    }
    // Exibindo o conteúdo do arquivo_mesclado.txt.
    while(fgets(minha_string, 100, arq_mesclado) != NULL) {
        printf("%s", minha_string);
    }

    fclose(arq_mesclado);

    return 0;
}