#include <stdio.h>
#include <string.h>

// Definição da struct Livro
struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

// Função para adicionar informações de um livro
void adicionarLivro(struct Livro listaLivros[], int *numLivros) {
    if (*numLivros < 100) {
        struct Livro novoLivro;
        printf("Digite o título do livro: ");
        scanf(" %[^\n]", novoLivro.titulo); // Usando espaço antes do % para ignorar quebras de linha
        printf("Digite o autor do livro: ");
        scanf(" %[^\n]", novoLivro.autor);
        printf("Digite o ano de publicação do livro: ");
        scanf("%d", &novoLivro.anoPublicacao);
        
        listaLivros[*numLivros] = novoLivro;
        (*numLivros)++;
        printf("Livro adicionado com sucesso!\n");
    } else {
        printf("A lista de livros está cheia.\n");
    }
}

// Função para listar todos os livros
void listarLivros(struct Livro listaLivros[], int numLivros) {
    int i;
    printf("Lista de Livros:\n");
    for (i = 0; i < numLivros; i++) {
        printf("Título: %s\n", listaLivros[i].titulo);
        printf("Autor: %s\n", listaLivros[i].autor);
        printf("Ano de Publicação: %d\n", listaLivros[i].anoPublicacao);
        printf("----------------------------\n");
    }
}

// Função para buscar livros por autor
void buscarLivroPorAutor(struct Livro listaLivros[], int numLivros, const char autorBusca[]) {
    int i;
    printf("Livros do autor '%s':\n", autorBusca);
    for (i = 0; i < numLivros; i++) {
        if (strcmp(listaLivros[i].autor, autorBusca) == 0) {
            printf("Título: %s\n", listaLivros[i].titulo);
            printf("Ano de Publicação: %d\n", listaLivros[i].anoPublicacao);
            printf("----------------------------\n");
        }
    }
}
int main() {
    struct Livro listaLivros[100];
    int numLivros = 0;
    int opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Buscar Livro por Autor\n");
        printf("4. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarLivro(listaLivros, &numLivros);
                break;
            case 2:
                listarLivros(listaLivros, numLivros);
                break;
            case 3:
                printf("Digite o nome do autor para buscar: ");
                char autorBusca[100];
                scanf(" %[^\n]", autorBusca);
                buscarLivroPorAutor(listaLivros, numLivros, autorBusca);
                break;
            case 4:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Escolha novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
