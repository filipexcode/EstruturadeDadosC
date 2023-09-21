#include <stdio.h>

void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int repartir(int arr[], int baixo, int alto) {
    int pivo = arr[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {
        if (arr[j] > pivo) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

void quickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int indicePivo = repartir(arr, baixo, alto);

        quickSort(arr, baixo, indicePivo - 1);
        quickSort(arr, indicePivo + 1, alto);
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int tamanho = linhas * colunas;
    int arrayUnidimensional[tamanho];
    int k = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            arrayUnidimensional[k++] = matriz[i][j];
        }
    }

    quickSort(arrayUnidimensional, 0, tamanho - 1);

    k = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = arrayUnidimensional[k++];
        }
    }

    printf("Matriz ordenada:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
