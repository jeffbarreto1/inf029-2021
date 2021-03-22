/*
-Instituto Federal da Bahia-
Curso: Análise e Desenvolvimento de Sistemas
Lista de Exercícios 1 - Funções
Aluno: Jefferson Barreto

Questão 8: 
    Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve
imprimir os dados do cliente.
*/

#include <stdlib.h>
#include <stdio.h>


typedef struct c{
 
    char nome[20], nascimento[20], cpf[20], sexo[20];
        
 
}cadastro;

 
cadastro cadastro_cliente(){

    cadastro cliente;

    printf("\n-----> CADASTRO DE CLIENTE <-----\n");
    printf("Digite o nome do cliente:\n");
    fgets(cliente.nome, 20, stdin);
    printf("Digite o CPF do cliente:\n");
    fgets(cliente.cpf,20, stdin);
    printf("Digite a data de nascimento do cliente:\n");
    fgets(cliente.nascimento, 20, stdin);
    printf("Digite o sexo do cliente:\n");
    fgets(cliente.sexo, 20, stdin);    
    
    return cliente;
}


int main(){

    cadastro result = cadastro_cliente();
    
    printf("%s", result.nome);
    printf("%s", result.cpf);
    printf("%s", result.nascimento);
    printf("%s", result.sexo);
    
    return 0;
}