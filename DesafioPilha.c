#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX 100

typedef struct {
    char itens[MAX][50]; // Array de strings para armazenar as peças
    int topo;
} Pilha;

void inicializar(Pilha *pilha) {
    pilha->topo = -1;
}

int estaVazia(Pilha *pilha) {
    return pilha->topo == -1;
}

int estaCheia(Pilha *pilha, int tamanho) {
    return pilha->topo == tamanho - 1;
}

void inserir(Pilha *pilha, char *item, int tamanho) {
	
    if (estaCheia(pilha, tamanho)) {
        printf("A pilha está cheia, não é possível inserir mais itens.\n");
    } else {
        pilha->topo++;
        strcpy(pilha->itens[pilha->topo], item);
    }
}

char *remover(Pilha *pilha) {
    if (estaVazia(pilha)) {
        printf("A pilha está vazia, não é possível remover mais itens.\n");
        return NULL;
    } else {
        return pilha->itens[pilha->topo--];
    }
}

int main() {
	
	int i;
	
    setlocale(LC_ALL, "");

    Pilha pilha;
    inicializar(&pilha);

    int tamanho;
    printf("Digite a quantidade de peças do ventilador: ");
    scanf("%d", &tamanho);

    char item[50];
    printf("Adicione as peças usando o método de pilha:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Insira a peça %d: ", i + 1);
        scanf("%s", item);
        inserir(&pilha, item, tamanho);
    }

    printf("\nEstado antes do desempilhamento:\n");
    for (i = pilha.topo; i >= 0; i--) {
        printf("Peça %d: %s\n", i + 1, pilha.itens[i]);
    }

    printf("\nDesempilhando o ventilador:\n");
    while (!estaVazia(&pilha)) {
        char *item = remover(&pilha);
        printf("Peça removida: %s\n", item);
    }

    return 0;
}
