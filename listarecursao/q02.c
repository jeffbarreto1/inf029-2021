#include <stdio.h>
#include <stdlib.h>

int fibonacci(int numero){

    if(numero == 1 || numero == 2){

        return 1;

    }

    return fibonacci(numero - 1) + fibonacci(numero - 2);

}

int main(){

    int fib, numero;

    printf("\nInforme um numero maior ou igual a 1: ");
    scanf("%d",&numero);

     if(numero >= 1){

        fib = fibonacci(numero);
        printf("\nA posicao %d da sequencia de fibonacci e: %d", numero,fib);

    }else{

        printf("\n Numero invalido");

    }
}