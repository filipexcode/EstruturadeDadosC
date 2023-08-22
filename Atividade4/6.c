#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

struct Estudante {
    char nome[50];
    int matricula;
    float notas[3];
};

float calcularMedia(struct Estudante aluno) {
    float somaNotas = 0;
    int i;
    
    for (i = 0; i < 3; i++) {
        somaNotas += aluno.notas[i];
    }
    
    return somaNotas / 3;
}

bool estaAprovado(struct Estudante aluno) {
    float media = calcularMedia(aluno);
    return media >= 7.0;
}

int main() {
	
		setlocale(LC_ALL,"");
		
    struct Estudante estudante;
    int i;
    
    printf("Informe o nome do estudante: ");
    fgets(estudante.nome, sizeof(estudante.nome), stdin);
    estudante.nome[strcspn(estudante.nome, "\n")] = '\0'; 
    
    printf("Informe a matrícula do estudante: ");
    scanf("%d", &estudante.matricula);
    
    for (i = 0; i < 3; i++) {
        printf("Informe a nota %d do estudante: ", i + 1);
        scanf("%f", &estudante.notas[i]);
    }
    
    printf("\nDados do estudante:\n");
    printf("Nome: %s\n", estudante.nome);
    printf("Matrícula: %d\n", estudante.matricula);
    
    for (i = 0; i < 3; i++) {
        printf("Nota %d: %.2f\n", i + 1, estudante.notas[i]);
    }
    
    float media = calcularMedia(estudante);
    printf("Média: %.2f\n", media);
    
    if (estaAprovado(estudante)) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }
    
    return 0;
}
