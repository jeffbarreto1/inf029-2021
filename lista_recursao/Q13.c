#include <stdio.h>
#include <stdlib.h>

int ordemDec(int x){
    
    if(x == 0){
        
       printf("%d",x);
        return 0;
        
    }
    
    printf("%d ",x);

    return ordemDec(x - 1);
}

int main()
{
    
    int x;
    int result;
    
    printf("\nInforme um numero: ");
    scanf("%d",&x);
    
    result = ordemDec(x);
        
    return 0;
}