#include <stdio.h>
#include <stdlib.h>

int ordem(int n){
    
    if(n == 0){
        
       printf("%d",n);
        return 0;
        
    }
    
    printf("%d ",n);

    return ordem(n - 1);
}

int main()
{
    
    int n;
    
    printf("\nInforme o valor de n: ");
    scanf("%d",&n);
    
    ordem(n);
    
    return 0;
}