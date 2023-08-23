#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Moeda {
    double dolares;
    double euros;
};

int main() {
    
    	setlocale(LC_ALL,"");
    
    double taxaCambio = 0.85;

    struct Moeda moeda;
    moeda.dolares = 0.0;
    moeda.euros = 0.0;

    int escolha;
    double valor;

    printf("Escolha uma moeda:\n");
    printf("1 - Dólares\n");
    printf("2 - Euros\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite o valor em dólares: ");
        scanf("%lf", &valor);
        moeda.dolares = valor;
        moeda.euros = valor * taxaCambio;
    } else if (escolha == 2) {
        printf("Digite o valor em euros: ");
        scanf("%lf", &valor);
        moeda.euros = valor;
        moeda.dolares = valor / taxaCambio;
    } else {
        printf("Escolha inválida.\n");
        return 1;
    }

    printf("Valor em dólares: %.2f\n", moeda.dolares);
    printf("Valor em euros: %.2f\n", moeda.euros);

    return 0;
}
