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

typedef struct {
    int num1;
    int num2;
    int num3;
    int num4;

} Numero;


Numero ler4Numeros(){
    Numero meusNumeros;
    int x1, x2, x3, x4;
       
    printf("\n-----> LER 4 NUMEROS <-----\n\n");
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&x1);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&x2);
    printf("\nDigite o terceiro numero: ");
	scanf("%d",&x3);
    printf("\nDigite o quarto numero: ");
	scanf("%d",&x4);

    meusNumeros.num1 = x1;
    meusNumeros.num2 = x2;
    meusNumeros.num3 = x3;
    meusNumeros.num4 = x4;

    return meusNumeros;
}

int main(){       
    Numero resultNumeros = ler4Numeros();
    
    printf("\nImprimindo... %d\n\n",resultNumeros.num1);
    printf("\nImprimindo... %d\n\n",resultNumeros.num2);
    printf("\nImprimindo... %d\n\n",resultNumeros.num3);
    printf("\nImprimindo... %d\n\n",resultNumeros.num4);  

    return 0;
        
}