#include <stdio.h>
#include <stdlib.h>

int ordem(int n,int i){
    
    if(i == n){
        
       printf("%d",i);
        return 0;
        
    }
    
    printf("%d ",i);

    return ordem(n,i + 1);
}

int main()
{
    
    int n,i;
    
    printf("\nInforme o valor de n: ");
    scanf("%d",&n);
    
    ordem(n,0);
    
    return 0;
}