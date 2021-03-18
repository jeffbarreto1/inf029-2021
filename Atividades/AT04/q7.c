/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 7: 
    Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do
usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/

#include <stdlib.h>
#include <stdio.h>



char ler3Palavras(char palavra[3][20]){

    int i;

    for (i = 0; i < 3; i++){
    printf("\nDigite uma palavra: ");
    scanf("%s,", palavra[i]);
    }

    return palavra;
}

int main(){

    char result[3][20];
    int j;
    
    ler3Palavras(result);
    for (j = 0; j < 3; j++){
    printf("\nImprimindo %d... %s\n\n", j, result[j]);

    }
    
}