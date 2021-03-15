/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 4: 
    Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno
*/

#include <stdlib.h>
#include <stdio.h>

int *ler3Numeros(int *vetor){ 

    printf("\n-----> LER 3 NUMEROS <-----\n");
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&vetor[0]);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&vetor[1]);
    printf("\nDigite o segundo numero: ");
	scanf("%d",&vetor[2]);


    return vetor;
}

int main(){

    int result[3];
    int i;

    ler3Numeros(result);
    for (i = 0; i < 3; i++){

        printf("\nImprimindo... %d\n\n",result[i]);
    }
    
    
    
}