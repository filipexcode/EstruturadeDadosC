#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidadeEstoque;
};

void comprarProduto(struct Produto *produto, int quantidade) {
    if (quantidade <= produto->quantidadeEstoque) {
        float total = produto->preco * quantidade;
        printf("Compra realizada:\n");
        printf("Produto: %s\n", produto->nome);
        printf("Quantidade comprada: %d\n", quantidade);
        printf("Total: R$%.2f\n", total);

        produto->quantidadeEstoque -= quantidade;
    } else {
        printf("Não há estoque suficiente para essa compra.\n");
    }
}

int main() {
    
    	setlocale(LC_ALL,"");

    
    struct Produto produto1 = {"Camiseta", 29.99, 10};
    struct Produto produto2 = {"Calça Jeans", 79.99, 5};

    int opcao, quantidade;

    do {
        printf("Produtos disponíveis:\n");
        printf("1. %s - R$%.2f - Estoque: %d\n", produto1.nome, produto1.preco, produto1.quantidadeEstoque);
        printf("2. %s - R$%.2f - Estoque: %d\n", produto2.nome, produto2.preco, produto2.quantidadeEstoque);
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite a quantidade desejada: ");
            scanf("%d", &quantidade);

            if (opcao == 1) {
                comprarProduto(&produto1, quantidade);
            } else {
                comprarProduto(&produto2, quantidade);
            }
        } else if (opcao != 3) {
            printf("Opção inválida.\n");
        }

    } while (opcao != 3);

    return 0;
}
