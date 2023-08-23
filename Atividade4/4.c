#include <stdio.h>
#include <string.h>

// Definição da struct Contato
struct Contato {
    char nome[50];
    char telefone[15];
};

// Função para adicionar um contato
void adicionarContato(struct Contato listaContatos[], int *numContatos) {
    if (*numContatos < 100) {
        struct Contato novoContato;
        printf("Digite o nome: ");
        scanf("%s", novoContato.nome);
        printf("Digite o telefone: ");
        scanf("%s", novoContato.telefone);
        
        listaContatos[*numContatos] = novoContato;
        (*numContatos)++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("A lista de contatos está cheia.\n");
    }
}

// Função para listar todos os contatos
void listarContatos(struct Contato listaContatos[], int numContatos) {
    int i;
    printf("Lista de Contatos:\n");
    for (i = 0; i < numContatos; i++) {
        printf("Nome: %s\n", listaContatos[i].nome);
        printf("Telefone: %s\n", listaContatos[i].telefone);
        printf("----------------------------\n");
    }
}
// Função para buscar um contato pelo nome
void buscarContato(struct Contato listaContatos[], int numContatos, const char nomeBusca[]) {
    int i;
    for (i = 0; i < numContatos; i++) {
        if (strcmp(listaContatos[i].nome, nomeBusca) == 0) {
            printf("Contato encontrado:\n");
            printf("Nome: %s\n", listaContatos[i].nome);
            printf("Telefone: %s\n", listaContatos[i].telefone);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}
int main() {
    struct Contato listaContatos[100];
    int numContatos = 0;
    int opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contatos\n");
        printf("3. Buscar Contato por Nome\n");
        printf("4. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(listaContatos, &numContatos);
                break;
            case 2:
                listarContatos(listaContatos, numContatos);
                break;
            case 3:
                printf("Digite o nome para buscar: ");
                char nomeBusca[50];
                scanf("%s", nomeBusca);
                buscarContato(listaContatos, numContatos, nomeBusca);
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
