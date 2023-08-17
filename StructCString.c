#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Nome[50];
    float Duracao;
    int Classificacao;
    char Diretor[50];
    char Genero[20];

} Movie;

Movie SetMovie(char nome[], float duracao, int classificacao, char diretor[], char genero[])
{
    Movie M;
    strcpy(M.Nome, nome);
    M.Duracao = duracao;
    M.Classificacao = classificacao;
    strcpy(M.Diretor, diretor);
    strcpy(M.Genero, genero);

    return M;
}

void ImprimeMovie(Movie M)
{
    printf("Nome: %s  Duracao: %f  Classificacao: %d  Diretor: %s  Gênero: %s\n", M.Nome, M.Duracao, M.Classificacao, M.Diretor, M.Genero);
}

int main()
{

    Movie Madagascar;
    Madagascar = SetMovie("Madagascar", 1.15, 10, "Eric Darnell", "Animação");
    ImprimeMovie(Madagascar);

    return 0;
}
