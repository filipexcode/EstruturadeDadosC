#include <stdio.h>
#include <math.h>

// Definição da struct Ponto
struct Ponto {
    float x;
    float y;
};

// Função para calcular a distância entre dois pontos
float calcularDistancia(struct Ponto p1, struct Ponto p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

// Função para calcular a inclinação da reta entre dois pontos
float calcularInclinacao(struct Ponto p1, struct Ponto p2) {
    if (p2.x - p1.x == 0) {
        return INFINITY; // Reta vertical
    }
    return (p2.y - p1.y) / (p2.x - p1.x);
}

int main() {
    struct Ponto ponto1 = {1.0, 2.0};
    struct Ponto ponto2 = {4.0, 6.0};

    // Calculando e imprimindo a distância entre os pontos
    float distancia = calcularDistancia(ponto1, ponto2);
    printf("Distancia entre os pontos: %.2f\n", distancia);

    // Calculando e imprimindo a inclinação da reta
    float inclinacao = calcularInclinacao(ponto1, ponto2);
    if (isfinite(inclinacao)) {
        printf("Inclinacao da reta: %.2f\n", inclinacao);
    } else {
        printf("Inclinacao da reta: Vertical\n");
    }

    return 0;
}
