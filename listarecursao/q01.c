#include <stdio.h>
#include <stdlib.h>


int fatorial(int numero){

    if(numero == 1 || numero == 0){

        return 1;

    }

    return numero * fatorial(numero - 1);

}



int main(){


    int fat , numero;

    printf("\nInforme o numero que deseja fatorar: ");
    scanf("%d",&numero);

    if(numero >= 0){

        fat = fatorial(numero);
        printf("\nResultado: %d", fat);

    }else{

        printf("\n Informe um numero maior ou igual a 0");

    }
}