#include <stdio.h>
#include <string.h>

void criptografar(char str[]);
void descriptografar(char str[]);

int main() {

    char minha_string[100];

    printf("Digite: ");
    scanf(" %s", minha_string);

    criptografar(minha_string);
    descriptografar(minha_string);

    return 0;
}

void criptografar(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {

        // Se str[i] for igual a "x" ou "y" ou "z".
        if (str[i] == 120 || str[i] == 121 || str[i] == 122) {
            str[i] -= 23;
        }
        else {
            str[i] += 3;
        }
    }
    printf("\n%s", str);
}

void descriptografar(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {

        // Se str[i] for igual a "a" ou "b" ou "c".
        if (str[i] == 97 || str[i] == 98 || str[i] == 99) {
            str[i] += 23;
        }
        else {
            str[i] -= 3;
        }
    }
    printf("\n%s", str);
}
