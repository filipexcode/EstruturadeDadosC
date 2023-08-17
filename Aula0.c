#include <stdio.h>
#include <stdlib.h>

int main(void) {
    struct ficha_de_aluno {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
        int matricula;
        int telefone;
        char email[100];
    };
    
    struct ficha_de_aluno aluno;

    printf("\n ----------- Cadastro de Alunos ----------\n\n\n");
    printf("Nome do Aluno .....: ");
    fflush(stdin);
    fgets(aluno.nome, 50, stdin);

    printf("Disciplina ....: "); 
    fflush(stdin);
    fgets(aluno.disciplina, 30, stdin);

    printf("Email: ");
    fgets(aluno.email, 100, stdin);

    printf("Matricula: ");
    scanf("%d", &aluno.matricula); 

    printf("Telefone: ");
    scanf("%d", &aluno.telefone); 

    printf("Informe a 1a. nota ..: ");
    scanf("%f", &aluno.nota_prova1);

    printf("Informe a 2a. nota ..: ");
    scanf("%f", &aluno.nota_prova2);

    printf("\n\n--Lendo os Dados da Struct-------\n\n");
    printf("Nome .....: %s", aluno.nome);
    printf("Disciplina ....: %s", aluno.disciplina);
    printf("Nota de Prova 1 ...: %.2f\n", aluno.nota_prova1);
    printf("Nota de Prova 2 ...: %.2f\n", aluno.nota_prova2);

    return 0;
}
