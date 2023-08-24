#include <stdio.h>
#include <string.h>

// Bubble Sort para ordenar um conjunto de caracteres em ordem alfabética
void bubbleSort(char vetor[], int n) {
	
	int i;
	int j;
	
    for (i = 0; i < n - 1; i++) {
    	
        for (j = 0; j < n - i - 1; j++) {
        	
            if (vetor[j] > vetor[j + 1]) {
            	
                char temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
	
    char vetor[100];
    
    printf("Digite um conjunto de caracteres: ");
    scanf("%s", vetor);
    
    int tamanho = strlen(vetor);
    
    bubbleSort(vetor, tamanho);
    
    printf("Conjunto ordenado: %s\n", vetor);
    
    return 0;
}
