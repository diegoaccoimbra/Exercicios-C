#include <stdio.h>
#include <string.h>

void converter_pra_maiuscula(char str[]);

int main() {
    char minha_string[100];

    printf("Digite: ");
    scanf("%s", minha_string);

    converter_pra_maiuscula(minha_string);

    return 0;
}

void converter_pra_maiuscula(char str[]) {
    // Verifica se cada caractere da string é minúsculo para fazer a conversão e atualiza a string toda.
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
            //printf("%c", str[i]);
        }
    }
    printf("%s", str);
}