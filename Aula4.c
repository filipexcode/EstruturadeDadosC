#include <stdio.h>
#include <stdlib.h>

//Bubble Sort


//Armazenando valores no vetor

int main() {
	
	int i, aux, n, vetor [5];
	
	for(i=0;i<=4;i++){
		printf("Digite a idade [%d] = ",i+1);
		scanf("%d",&vetor[i]);
	}
	
	for(i=0;i<=4;i++){
		printf("%d \t",vetor[i]);
	}
	
	printf("\n");
	
	for (n = 1; n <= 5; n++){
		for(i=0;i<=3;i++){
			if(vetor[i] > vetor[i + 1]){
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
			}
		}
	}
	for(i=0;i<=4;i++){
		printf("%d \t",vetor[i]);
	}
	
	return 0;
}
