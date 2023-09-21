#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int alvo) {
    int esquerda = 0;
    int direita = tamanho - 1;
   
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
       
        if (vetor[meio] == alvo) {
            return meio; // Encontrou o número, retorna a posição
        } else if (vetor[meio] < alvo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
   
    return -1; // O número não está no vetor
}

int main() {
	
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int alvo = 5;
   
    int posicao = buscaBinaria(vetor, tamanho, alvo);
   
    if (posicao != -1) {
    	
        printf("O numero %d foi encontrado na posicao %d.\n", alvo, posicao);
        
    } else {
    	
        printf("O numero %d não foi encontrado no vetor.\n", alvo);
        
    }
   
    return 0;
}
