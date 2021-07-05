#include <stdio.h>
#include <stdlib.h>

int somaVet(int vet[], int x, int total){
	
    if(x == 0){

		printf("\n Soma: %d", total);
        return 1;
        
    }
    
    total = total + vet[x - 1];

   return somaVet(vet, x - 1, total);

}

int main(){

    int x = 0,y;

    while(x <= 0){

        printf("\nInforme o tamanho do vetor: ");
        scanf("%d",&x);

    }

    int vet[x];

    for(y = 0;y < x; y++){

        printf("\nInforme a posicao %d do vetor: ",y);
        scanf("%d",&vet[y]);

    }
    
    somaVet(vet,x,0);

}
