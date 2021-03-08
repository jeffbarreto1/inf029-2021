#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int soma(){ 
	int num1, num2;

	printf("\n-----> SOMA <-----");
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&num2);

	return(num1+num2); 
}