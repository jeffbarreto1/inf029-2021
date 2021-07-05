#include <stdio.h>
#include <stdlib.h>

//questão 9 = questão 5

int somaNum(int num){

    if(num == 1){

        return 1;
    }

    return num + somaNum(num - 1);

}


int main(){


    int soma,num;

    printf("\nInforme o numero: ");
    scanf("%d",&num);

    soma = somaNum(num);

    printf("\nA soma ate 1 e: %d", soma);

}