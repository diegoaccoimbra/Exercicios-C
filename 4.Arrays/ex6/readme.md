# Busca em Vetor Ordenado

Imagine que você foi contratado por uma empresa que gerencia uma extensa lista de nomes de clientes. Essa lista está ordenada alfabeticamente para facilitar a consulta e organização dos dados. Atualmente, a empresa utiliza a função `busca_1` para localizar nomes específicos na lista. No entanto, essa função apresenta um desempenho insatisfatório, especialmente para listas com grande número de nomes.

## Função Atual:
```

int busca_1(int vetor[], int tamanho_vetor, int chave_busca) {
 // Percorre o vetor elemento por elemento
 for (int i = 0; i < tamanho_vetor; i++) {
   // Compara cada elemento com a chave de busca
   if (vetor[i] == chave_busca) {
     // Chave encontrada! Retorna o índice
     return i;
   }
 }
 // Chave não encontrada
 return -1;
}

```

A função `busca_1`, no pior caso, precisa percorrer toda a lista para encontrar o nome desejado. Essa abordagem se torna ineficiente para listas extensas, pois o tempo de busca cresce bastante com o tamanho da lista.

## Sua Tarefa:

Seu objetivo é desenvolver uma função em C que realize a busca de nomes na lista ordenada de forma mais eficiente, explorando a ordenação da lista para otimizar o tempo de busca. Essa função deve ser significativamente mais rápida que a `busca_1`, especialmente para listas grandes. Explique porque a nova função possui desempenho melhor.