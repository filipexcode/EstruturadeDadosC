#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, n, vet[10] = {56, 26, 93, 17, 77, 31, 44, 55, 20, 65};
	
	for(i=0;i<10;i++){
		
		printf("Qual o valor que voce deseja buscar: ");
		scanf("%d",&n);
		
//Implementando o metodo de busca
	for(i=0;i<10;i++){
		if(vet[i] == n){
			printf("%d ocorre na posicao %d do vetor\n",n,i);
			return 0;
		}
	}
	}
}
