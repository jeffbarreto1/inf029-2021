/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 2: 
    Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração
*/

#include <stdlib.h>
#include <stdio.h>

int subtrair(int a, int b, int c){ 

	return(a-b-c); 
}

int main(){

    float result;
    int num1, num2, num3;

    printf("\n-----> CALCULADORA DE SUBTRAIR <-----\n");
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&num2);
    printf("\nDigite o segundo numero: ");
	scanf("%d",&num3);

    result = subtrair(num1, num2, num3);
    printf("\nO resultado da operacao e: %.2f\n\n",result);
    
    return 0;
}