#include <stdio.h>
#include <stdlib.h>

int fatDuplo(int n){
    
    if(n == 1){
        
        return n;
    }
    
    if(n%2 == 0){
        
        printf("\n O numero nao e impar");
        return 0;
    }
    
    if(( (n-1) % 2) != 0){
    
        return n* fatDuplo(n-1);
            
    }
    
    return n* fatDuplo(n - 2);
}

int main()
{
    
    int n;
    
    printf("\nInforme o numero: ");
    scanf("%d",&n);
    
    if(n%2 != 0){
    
        printf("\n O fatorial duplo de %d e: %d",n,fatDuplo(n));
            
    }
    
    
    return 0;
}