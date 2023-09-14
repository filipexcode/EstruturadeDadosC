#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int buscaSequencial(int vetor[], int tamanho, int numero) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return i; 
        }
    }
    return -1;  
}

int main() {
	
    srand(time(NULL));

    int tamanho = 5;
    int vetor[tamanho];

    int i;
    for (i = 0; i < tamanho; i++) {
        vetor[i] = gerarNumeroAleatorio(1, 100);
    }

    printf("Vetor gerado: ");
   
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int numeroBuscado;
    printf("Digite o numero a ser buscado: ");
    scanf("%d", &numeroBuscado);

    int posicao = buscaSequencial(vetor, tamanho, numeroBuscado);

    if (posicao != -1) {
        printf("O numero %d foi encontrado na posiçao %d do vetor.\n", numeroBuscado, posicao);
    } else {
        printf("O nmero %d não foi encontrado no vetor.\n", numeroBuscado);
    }

    return 0;
}
