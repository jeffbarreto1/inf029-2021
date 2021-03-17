/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 5: 
    Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct{
    
    int num1;
    int num2;
    int num3;
    int num4;

}numero;

numero num1;
numero num2;
numero num3;
numero num4;

void ler4Numeros(){


    printf("\n-----> LER 4 NUMEROS <-----\n");
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&num2);
    printf("\nDigite o terceiro numero: ");
	scanf("%d",&num3);
    printf("\nDigite o quarto numero: ");
	scanf("%d",&num4);

}

int main(){       
    
    ler4Numeros();

    printf("\nImprimindo... %d\n\n",num1);
    printf("\nImprimindo... %d\n\n",num2);
    printf("\nImprimindo... %d\n\n",num3);
    printf("\nImprimindo... %d\n\n",num4);
    
    
    
}