#include <stdio.h>
#include <stdlib.h>

int multiplica(int n, int i){
    
    if(i == 1){
        
        return n;
    }
    
    return n + multiplica(n,i - 1);
}

int main()
{
    
    int n,i;
    
    printf("\nInforme o valor : ");
    scanf("%d",&n);
    
    printf("\nInforme quantas vezes devera ser multiplicado: ");
    scanf("%d",&i);
    
    printf("\nA multiplicacao de %d por %d e: %d",n,i,multiplica(n,i));
    
    return 0;
}