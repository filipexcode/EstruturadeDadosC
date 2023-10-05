#include <stdio.h>

void bubbleSort(int matriz[4][4]) {
    int i, j, k, temp;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (matriz[j][0] > matriz[j + 1][0]) {
                
                for (k = 0; k < 4; k++) {
                    temp = matriz[j][k];
                    matriz[j][k] = matriz[j + 1][k];
                    matriz[j + 1][k] = temp;
                }
            }
        }
    }
}

int main() {
	
	int i,j;
	
    int matriz[4][4] = {{45, 32, 83, 95},
                        {26, 14, 37, 42},
                        {40, 43, 65, 77},
                        {74, 79, 48, 55}};

    
    bubbleSort(matriz);

   
    printf("Matriz Ordenada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

