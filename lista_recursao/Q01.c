#include <stdio.h>
#include <stdlib.h>


int fatorial(int num){

    if(num == 1 || num == 0){

        return 1;
    }

    return num * fatorial(num - 1);

}



int main(){


    int fat , num;

    printf("\nInforme um numero >= 0: \n");
    scanf("%d",&num);

    if(num >= 0){

        fat = fatorial(num);
        printf("\nResultado: %d\n", fat);
    }

    else{

        printf("\n ERRO!");
        printf("\n Informe um numero >= 0");

    }
}