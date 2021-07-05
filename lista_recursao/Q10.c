#include <stdio.h>
#include <stdlib.h>

int ocorrencia(int n, int i, int k){
    
    if(n%10 == i){
        
        k++;
    }
    
    if(n == 0){
        
        return k;
        
    }
    
    return ocorrencia(n/10,i,k);
}

int main()
{
    
    int n,i;
    
    printf("\nInforme o numero: ");
    scanf("%d",&n);
    
    printf("\nInforme a ocorrencia que deseja encontrar: ");
    scanf("%d",&i);
    
    printf("\n O valor %d aparece %d vezes",i,ocorrencia(n,i,0));
    
    return 0;
}