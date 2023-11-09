#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

typedef struct Node {
    char nome[MAX_NAME_LENGTH];
    struct Node* prox;
} Node;

typedef struct {
    Node* inicio;
    Node* fim;
} Fila;

void criarFila(Fila* fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

int filaVazia(Fila* fila) {
    return fila->inicio == NULL;
}

Node* criarNo(char* nome) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    strncpy(novoNo->nome, nome, MAX_NAME_LENGTH);
    novoNo->prox = NULL;
    return novoNo;
}

void enfileirar(Fila* fila, char* nome) {
    Node* novoNo = criarNo(nome);
    if (filaVazia(fila)) {
        fila->inicio = novoNo;
        fila->fim = novoNo;
    } else {
        fila->fim->prox = novoNo;
        fila->fim = novoNo;
    }
}

void desenfileirar(Fila* fila) {
    if (filaVazia(fila)) {
        printf("Fila vazia.\n");
        return;
    }
    Node* temp = fila->inicio;
    fila->inicio = fila->inicio->prox;
    free(temp);
}

int main() {
	
	int i;
	
    Fila fila;
    criarFila(&fila);

    char nome[MAX_NAME_LENGTH];
    int quantidade;

    printf("Digite o nome da pessoa: ");
    fgets(nome, MAX_NAME_LENGTH, stdin);

    printf("Digite a quantidade de pessoas a serem adicionadas à fila: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        enfileirar(&fila, nome);
    }

    printf("Pessoas adicionadas à fila: %d\n", quantidade);

    for (i = 0; i < quantidade; i++) {
        desenfileirar(&fila);
        printf("Pessoa removida da fila.\n");
    }

    return 0;
}
