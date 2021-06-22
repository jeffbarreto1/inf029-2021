#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetor[], int n, int total){
	
    if(n == 0){

		printf("\n A soma dos elementos do vetor e: %d", total);
        return 1;
        
    }
    
    total = total + vetor[n - 1];

   return somaVetor(vetor, n - 1, total);

}

int main(){

    int n = 0,i;

    while(n <= 0){

        printf("\nInforme o valor do vetor: ");
        scanf("%d",&n);

    }

    int vetor[n];

    for(i = 0;i < n; i++){

        printf("\nInforme o valor da posicao %d do vetor: ",i);
        scanf("%d",&vetor[i]);

    }
    
    somaVetor(vetor,n,0);

}
