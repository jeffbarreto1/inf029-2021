/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 6: 
    Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.
*/

#include <stdlib.h>
#include <stdio.h>
#include <curses.h>

char *ler3Letras(char *vetor){ 

    printf("\n-----> LER 3 LETRAS <-----\n");
	printf("\nDigite a primeiro letra: ");
	scanf("%c%*c",&vetor[0]);
	printf("\nDigite a segundo letra: ");
	scanf("%c%*c",&vetor[1]);
    printf("\nDigite a terceiro letra: ");
	scanf("%c%*c",&vetor[2]);


    return vetor;
}

int main(){

    char result[3];
    int i;

    ler3Letras(result);
    for (i = 0; i < 3; i++){

        printf("\nImprimindo %d... %c\n\n",i,result[i]);
    }
    
    
    
}