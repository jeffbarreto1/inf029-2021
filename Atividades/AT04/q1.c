/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 1: 
    Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma

*/



#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int soma(int a, int b){ 

	return(a+b); 
}

int main(){

    float result;
    int num1, num2;

    printf("\n-----> CALCULADORA DE SOMA <-----\n");
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&num2);

    result = soma(num1, num2);
    printf("\nO resultado da operacao e: %.2f\n\n",result);
    
}