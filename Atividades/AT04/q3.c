/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 3: 
    Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
*/

#include <stdlib.h>
#include <stdio.h>

int fatorial(int a){ 

    int fat = 1;
        
    if (a < 0){
        return -1;
    }

    else
        for( ; a > 0; fat *= a-- );
        return fat;
}

int main(){

    int result, num1;
  
    printf("\n-----> CALCULADORA FATORIAL <-----\n");    
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&num1);
    result = fatorial(num1);

    
    if (num1<0){
        printf("\nNão existe fatorial de número negativo\n\n");
    }
    else
        printf("\nO resultado da operacao e: %d\n\n",result);
        
    return 0;
}