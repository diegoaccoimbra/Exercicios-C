#include <stdio.h>

int main() {
    char alfabeto[26], *ptr_alfabeto;
  
    ptr_alfabeto = alfabeto; // O mesmo que ptr_alfabeto = &alfabeto[0]
    
    // Adicionando as letras no vetor com ponteiro.
    for (char letra = 'a'; letra <= 'z'; letra++) {
        // Adicionando a letra no valor do array alfabeto.
        *ptr_alfabeto = letra;
        // Passando para a próxima posição do array.
        ptr_alfabeto++;
    }

    // Voltando o valor dele para o início do array, para assim podermos percorrê-lo de novo.
    ptr_alfabeto = alfabeto;

    // Imprimindo o array.
    while (*ptr_alfabeto) {
        printf("%c ", *ptr_alfabeto);
        ptr_alfabeto++;
    }

    return 0;
}
