#include <stdio.h>
#include <string.h>

void primeiro_nao_repetido(char str[]);

int main ( ) {
    char *minha_string = "uuqiqoq";
    
    primeiro_nao_repetido(minha_string);

    return 0 ;
}

void primeiro_nao_repetido(char str[]) {
int i = 0;
    while (i < strlen(str)) {
        int ocorrencia = 0;
        for (int j = 0; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                ocorrencia++;
            }
        }
        //printf("Ocorrências de %c: %d\n", str[i], ocorrencia);
        if (ocorrencia == 1) {
            printf("%c", str[i]);
            break;
        }
        i++;
        if (i == strlen(str)) {
            printf("Nenhum");
        }
    }
}