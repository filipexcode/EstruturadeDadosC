#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Tipo {
    char fileira;
    int assento;
};

int main() {
    
    	setlocale(LC_ALL,"");
    
    struct Tipo tipo1;
    
    printf(" Olá, vamos fazer a escolha do seu assento !\n");
    printf(" Nossos assentos são distribuidos da seguinte forma:");
    
        printf("\n");

    
    printf(" Fileiras de A a H e Assentos de 1 a 9\n");
    
    	printf("\n");
    
    printf(" A 1 2 3 4 5 6 7 8 9 \n");
    printf(" B 1 2 3 4 5 6 7 8 9 \n");
	printf(" C 1 2 3 4 5 6 7 8 9 \n");
    printf(" D 1 2 3 4 5 6 7 8 9 \n");
	printf(" E 1 2 3 4 5 6 7 8 9 \n");
	printf(" F 1 2 3 4 5 6 7 8 9 \n");
    printf(" G 1 2 3 4 5 6 7 8 9 \n");
	printf(" H 1 2 3 4 5 6 7 8 9 \n");
    
        printf("\n");

    
    printf("Digite a fileira: ");
    fflush(stdin);
    scanf("%c",&tipo1.fileira);
    
    	printf("\n");

    printf("Digite o assento: ");
    fflush(stdin);
    scanf("%d",&tipo1.assento);
    
        printf("\n");
    
    printf("Você escolheu o assento %c%d\n",tipo1.fileira,tipo1.assento);
    	
		printf("\n");
		
    printf("Tenha um ótimo filme e obrigado pela preferência !! \n");
    			
}
