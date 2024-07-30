#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_PLACA 9
#define TAMANHO_MODELO 25

typedef struct {
    char *placa;
    char *modelo;
} Carro; 

char* get_modelo(Carro* carros, char* placa_buscada);
int tamanho;

int main() {
    //int tamanho;
    Carro *carros;

    printf("Número de carros: ");
    scanf("%d", &tamanho);
    getchar();

    // Alocando memória para a struct com base na quantidade de carros.
    carros = malloc(sizeof(Carro) * tamanho);
    if (carros == NULL) {
        printf("Erro ao alocar memória para o array de structs");
        return 1;
    }

    // Preenchendo o array de carros.
    for (int i = 0; i < tamanho; i++) {
        // Alocando memória para a string que cada "*placa" e "*modelo" aponta.
        carros[i].placa = malloc(sizeof(char) * TAMANHO_PLACA);
        carros[i].modelo = malloc(sizeof(char) * TAMANHO_MODELO);
        
        if (carros[i].placa == NULL || carros[i].modelo == NULL) {
            printf("ERRO ao alocar memória para placa e/ou modelo");
            return 1;
        }

        // Inserindo os valores da placa e modelo.
        printf("\nPlaca: ");
        fgets(carros[i].placa, TAMANHO_PLACA, stdin);
        getchar();
        // Remove o caractere '\n' da string.
        carros[i].placa[strcspn(carros[i].placa, "\n")] = '\0';

        printf("Modelo: ");
        fgets(carros[i].modelo, TAMANHO_MODELO, stdin);
        // Remove o caractere '\n' da string.
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';
    }

    // Realizando a busca.

    char *modelo_buscado = get_modelo(carros, "DEF-5678");
    if (modelo_buscado == NULL) {
        printf("O carro com essa placa não foi encontrado\n");
    }
    else {
        printf("Modelo de carro com essa placa: %s\n", modelo_buscado);
    }

    // Liberando a memória alocada.
    for (int i = 0; i < tamanho; i++) {
        free(carros[i].placa);
        free(carros[i].modelo);
    }

    free(carros);

    return 0;
}

char* get_modelo(Carro* carros, char placa_buscada[]) {
    // Laço que itera pelas placas
    int i = 0;
    while (i < tamanho) {
        if (strcmp(placa_buscada, carros[i].placa) == 0) {
            return carros[i].modelo;
        }
        i++;
    }
    // Retorna NULL caso a placa não seja encontrada.
    return NULL;
}