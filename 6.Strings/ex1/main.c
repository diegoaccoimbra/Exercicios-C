#include <stdio.h>
#include <string.h>

int main() {

    char str[60] = "Oi tudo bem com você?";
    int quantidade_palavras = 0;

    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i + 1] == '\0')) {
            quantidade_palavras++;
       }
    }

    printf("\nA string tem %d palavras", quantidade_palavras);

    return 0;
}