#include <stdio.h>
#include <stdlib.h>

int imprimePar(int n){
    
    if(n == 0){
        
        printf("%d",n);
        return n;
        
    }
    
    if(n%2 == 0){
        
        printf("%d ",n);
    }
    
    return imprimePar(n - 1);
}

int main()
{
    
    int n;
    
    printf("\nInforme o numero: ");
    scanf("%d",&n);
    
    imprimePar(n);
    
    return 0;
}