#include <stdio.h>

int main() {
    FILE *arq, *novo_arq;
    char minha_string[100];
    int linha__removida;

    printf("Insira a linha que deseja remover: ");
    scanf("%d", &linha__removida);

    arq = fopen("arquivo.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return -1;
    }

    // Criando o novo arquivo
    novo_arq = fopen("novo_arquivo.txt", "w");
    if (novo_arq != NULL) {
        int linha = 1;
        printf("O conteúdo do arquivo é: \n");
        // Armazenando as linhas do arquivo na minha_string e depois inserindo a string no arquivo.
        while(fgets(minha_string, 100, arq) != NULL) {
            // Verifica se a linha atual é a que deseja ser removida.
            if (linha != linha__removida) {
                fputs(minha_string, novo_arq);
                printf("%s", minha_string);
            }   
            linha++;
        }
    }

    fclose(arq);
    fclose(novo_arq);

    // Excluindo o arquivo original.
    remove("arquivo.txt");
    
    return 0;
}