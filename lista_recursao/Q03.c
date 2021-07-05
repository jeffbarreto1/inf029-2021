#include <stdio.h>
#include <stdlib.h>


int invertido(int num){
	int rest;

	
    rest = num % 10;
    printf("%d",rest);
    num = num / 10;

    return invertido(num);

}

int main(){

    int num;
    int invert;

    printf("\nInforme o numero para inverter: ");
    scanf("%d",&num);

    invertido(num);

    invert = invertido(num);
    printf("\nNumero invertido: %d", invert);

}