#include <stdio.h>

int buscaSequencial(int matriz[4][4], int valor, int *linhaEncontrada, int *colunaEncontrada) {
	
	int i,j;
	
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] == valor) {
                *linhaEncontrada = i;
                *colunaEncontrada = j;
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int matriz[4][4] = {{45, 32, 83, 95},
                        {26, 14, 37, 42},
                        {40, 43, 65, 77},
                        {74, 79, 48, 55}};

    int valorBuscado = 45;
    int linha, coluna;
    int resultado = buscaSequencial(matriz, valorBuscado, &linha, &coluna);

    if (resultado == 1) {
        printf("Valor encontrado na posicao: linha %d, coluna %d\n", linha, coluna);
    } else {
        printf("Valor não encontrado na matriz.\n");
    }

    return 0;
}


