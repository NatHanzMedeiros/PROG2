#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *dados;     // vetor para armazenar os elementos
    int topo;       // posição do topo
    int capacidade; // capacidade máxima da pilha
} Pilha;

// Função apenas para criar a pilha
Pilha *criarPilha(int capacidade) {
    Pilha *p;
    p = malloc(sizeof(Pilha));
    (*p).dados = malloc(capacidade * sizeof(int));
    (*p).topo = -1;           // -1 significa que está vazia
    (*p).capacidade = capacidade;

return p;
}

int main() {
    Pilha *minhaPilha;
    minhaPilha = criarPilha(15);
    printf("Pilha criada com capacidade %d.\n", (*minhaPilha).capacidade);

    // futuramente você poderia liberar a memória:
    free(minhaPilha->dados);
    free(minhaPilha);

    return 0;
}
