// FILAS

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
	
	int items[MAX_SIZE];
	int inicio, fim;
	
}Fila;


//inicializa fila
void inicializar(Fila *fila) {
	fila->inicio = -1;
	fila->fim = -1;
}

//verifica se a fila está vazia
int estaVazia(Fila *fila) {
	return(fila->inicio == -1 && fila->fim == -1) || (fila->inicio > fila->fim);
}

//verifica se a fila esta cheia
int estaCheia(Fila *fila){
	return(fila->fim + 1) % MAX_SIZE == fila->inicio;
}

//insere um elemento no fim da fila
void inserir(Fila *fila, int data) {
	if(estaCheia(fila)) {
		printf("A fila esta cheia.\n");
	}else{
		if (fila->inicio == -1) {
			fila->inicio = 0;
		}
		fila->items[++fila->fim] = data;
	}
}

//remove e retornao elemento no inicio da fila
int remover(Fila *fila) {
	if(estaVazia(fila)){
		printf("A fila esta vazia.\n");
		return -1;
	}else{
		return fila->items[fila->inicio++];
	}
}

int main() {
	Fila fila;
	inicializar(&fila);
	
	inserir(&fila, 1);
	inserir(&fila, 2);
	inserir(&fila, 3);
	
	printf("Elemento removido: %d\n", remover(&fila));
	printf("Elemento removido: %d\n", remover(&fila));
	
	return 0;
}
