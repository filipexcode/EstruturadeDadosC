#include <stdio.h>

void buscarValor(int matriz[][100], int linhas, int colunas, int valor, int* linhaEncontrada, int* colunaEncontrada) {
    *linhaEncontrada = -1;
    *colunaEncontrada = -1;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                *linhaEncontrada = i;
                *colunaEncontrada = j;
                return;
            }
        }
    }
}

int main() {
    int linhas, colunas, valor, linhaEncontrada, colunaEncontrada;

    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    int matriz[100][100];

    printf("Digite os elementos da matriz:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    buscarValor(matriz, linhas, colunas, valor, &linhaEncontrada, &colunaEncontrada);

    if (linhaEncontrada != -1 && colunaEncontrada != -1) {
        printf("O valor %d foi encontrado na posição (%d, %d).\n", valor, linhaEncontrada, colunaEncontrada);
    } else {
        printf("O valor %d não foi encontrado na matriz.\n", valor);
    }

    return 0;
}
