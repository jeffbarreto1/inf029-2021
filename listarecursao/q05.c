#include <stdio.h>
#include <stdlib.h>

int somaNumero(int numero){

    if(numero == 1){

        return 1;
    }

    return numero + somaNumero(numero - 1);

}


int main(){


    int soma,numero;

    printf("\nInforme o numero para somar: ");
    scanf("%d",&numero);

    if(numero < 1){

        printf("\nInforme um numero maior que 0");

    }

    soma = somaNumero(numero);

    printf("\nA soma do numero %d ate 1 e: %d",numero,soma);

}