#include <stdio.h>
#include <locale.h>

typedef struct
{
    char nome[50];
    float precoCompra;
    float precoVenda;
} Mercadoria;

int main()
{
	
	setlocale(LC_ALL, "");
	
	printf("Vamos começar !\n");
	printf("Insira os dados que se pedem a seguir: \n");
	
	printf("\n");
	
    Mercadoria produto;

    
    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);

	printf("\n");

    printf("Digite o preco de compra do produto: ");
    scanf("%f", &produto.precoCompra);

    
    produto.precoVenda = produto.precoCompra * 1.25;

    printf("\n");
    printf("Nome do Produto: %s\n", produto.nome);
    printf("Preco de Compra: R$%.2f\n", produto.precoCompra);
    printf("Preco de Venda com 25%% de Lucro: R$%.2f\n", produto.precoVenda);

    return 0;
}


