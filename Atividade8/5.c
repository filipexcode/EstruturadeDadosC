#include <stdio.h>

void ordenacaoPorInsercao(int matriz[][100], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 1; j < colunas; j++) {
            int chave = matriz[i][j];
            int k = j - 1;
            
            while (k >= 0 && matriz[i][k] < chave) {
                matriz[i][k + 1] = matriz[i][k];
                k--;
            }
            
            matriz[i][k + 1] = chave;
        }
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    int matriz[100][100];

    printf("Digite os elementos da matriz:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    ordenacaoPorInsercao(matriz, linhas, colunas);

    printf("Matriz ordenada:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
