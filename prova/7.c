#include <stdio.h>

void insertionSort(int linha[], int tamanho) {
	
	int i,j;
	
    for (i = 1; i < tamanho; i++) {
        int elementoAtual = linha[i];
        j = i - 1;

        while (j >= 0 && linha[j] > elementoAtual) {
            linha[j + 1] = linha[j];
            j--;
        }
        linha[j + 1] = elementoAtual;
    }
}

int main() {
	
	int i,j; 
	
    int matriz[4][4] = {{45, 32, 83, 95},
                        {26, 14, 37, 42},
                        {40, 43, 65, 77},
                        {74, 79, 48, 55}};

    for (i = 0; i < 4; i++) {
        insertionSort(matriz[i], 4);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


