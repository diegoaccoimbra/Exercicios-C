#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <time.h>

typedef struct {
    char nome[100];
    int telefone;
} Pessoa;

void add_pessoa(Pessoa *agenda, Pessoa pessoa, int indice);
void buscar_pessoa(Pessoa *agenda, char nome_buscado[], int numero_de_pessoas);

int main() {
    Pessoa *agenda;
    int numero_de_pessoas = 3;
    
    // Alocando memória pra agenda.
    agenda = malloc(sizeof(Pessoa) * numero_de_pessoas);
    if (agenda == NULL) {
        printf("Erro na alocação!\n");
    }
    
    // Adicionando as pessoas na agenda de forma aleatória.
/*
    srand(time(0));
    for (int i = 0; i < numero_de_pessoas; i++) {
        strcpy(agenda[i].nome, "AAA");
        agenda[i].telefone = 98000000 + rand() % 1000000;
    }
*/

    // Adicionando as pessoas na agenda com a função add_pessoa.
    Pessoa p1 = {"João", 98765432};
    add_pessoa(agenda, p1, 0);

    Pessoa p2 = {"Clara", 9287387};
    add_pessoa(agenda, p2, 1);

    Pessoa p3 = {"Marcelo", 98123876};
    add_pessoa(agenda, p3, 2);

    // Exibindo a agenda.
    for (int i = 0; i < numero_de_pessoas; i++) {
        printf("\nNome: %s\nTelefone: %d\n", agenda[i].nome, agenda[i].telefone);
    }

    // Buscando um contato.
    buscar_pessoa(agenda, "Clara", numero_de_pessoas);

    return 0;
}

// Função pra adicionar um contato por vez.
void add_pessoa(Pessoa *agenda, Pessoa pessoa, int indice) {
    strcpy(agenda[indice].nome, pessoa.nome);
    agenda[indice].telefone = pessoa.telefone;
}

// Função pra encontrar um telefone pelo nome da pessoa.
void buscar_pessoa(Pessoa *agenda, char nome_buscado[], int numero_de_pessoas) {
    int i = 0;
    while (i < numero_de_pessoas) {
        int resultado = strcmp(agenda[i].nome, nome_buscado);
        if (resultado == 0) {
            printf("\nO número de %s é %d", nome_buscado, agenda[i].telefone);
        }
        i++;
    }
}