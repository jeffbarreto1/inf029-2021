#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int subtracao(){ 
	int a,b;

	printf("\n-----> SUBTRAÇÃO <-----");
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&a);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&b);

	return(a-b); 
}