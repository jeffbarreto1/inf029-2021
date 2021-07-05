#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){

    if(num == 1 || num == 2){

        return 1;

    }

    return fibonacci(num - 1) + fibonacci(num - 2);

}

int main(){

    int fibo, num;

    printf("\nInforme um numero >= a 1: ");
    scanf("%d",&num);

     if(num >= 1){

        fibo = fibonacci(num);
        printf("\nA sequencia de fibonacci e: %d", fibo);

    }
    
    else{

        printf("\n ERRO!");
        printf("\n Numero invalido");

    }
}