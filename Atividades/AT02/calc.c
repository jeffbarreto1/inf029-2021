#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int soma(){ 
	int num1, num2;

	printf("\n----- SOMA -----");
	printf("\nDigite o primeiro numero:");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero:");
	scanf("%d",&num2);

	return(num1+num2); 
}

int subtracao(){ 
	int a,b;

	printf("\n----- SUBTRAÇÃO -----");
	printf("\nDigite o primeiro numero:");
	scanf("%d",&a);
	printf("\nDigite o segundo numero:");
	scanf("%d",&b);

	return(a-b); 
}

int multiplicacao(){ 
	int a,b;

	printf("\n----- MULTIPLICACAO -----");
	printf("\nDigite o primeiro numero:");
	scanf("%d",&a);
	printf("\nDigite o segundo numero:");
	scanf("%d",&b);

	return(a*b); 
}

float divisao(){ 
	float a,b;

	printf("\n----- DIVISÃO -----");
	printf("\nDigite o primeiro numero:");
    scanf("%f",&a);
    printf("\nDigite o segundo numero:");
    scanf("%f",&b);
	
	if(b==0){
		printf("operação incorreta, tente novamente\n");
		return 0;
	}

	else
		return(a/b); 
}

void menu(){
	printf("\nEscolha a operacao que deseja realizar:\n");
	printf("\n[0]-Sair\n");
	printf("\n[1]-Soma\n");
	printf("\n[2]-Subtracao\n");
	printf("\n[3]-Multiplicacao\n");
	printf("\n[4]-Divisao\n");
	printf("\n\n");
}

int main(){
	
	float result;
	int operador;
	int sair = 0;

	while (!sair){
        menu();
        scanf("%d", &operador);
			switch (operador){
				case 0:{
					sair=1;					
					printf("\nSaindo...\n");
					break;
				}
				
				case 1:{
					result = soma();
					printf("\nO resultado da operacao:%.2f\n",result);
					break;
				}
				case 2:{
					result = subtracao();
					printf("\nO resultado da operacao:%.2f\n",result);
					break;
				}
				case 3:{
					result = multiplicacao();
					printf("\nO resultado da operacao:%.2f\n",result);
					break;
				}
				case 4:{
					result = divisao();
					printf("\nO resultado da operacao:%.2f\n",result);
					break;
				}
				default: {
					printf("operação incorreta, tente novamente\n");
					break;
				}
			}
	 }


	return 0;
}