#include <stdio.h>
#include <stdlib.h>


int inverter(int numero){
	int resto;

    if(numero == 0){

        return numero;
    }
	
    resto = numero % 10;
    printf("%d",resto);
    numero = numero / 10;

    return inverter(numero);

}

int main(){

    int numero;

    printf("\nInforme o numero para inverter: ");
    scanf("%d",&numero);

    inverter(numero);

}