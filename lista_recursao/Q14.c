#include <stdio.h>
#include <stdlib.h>


int imprimePar(int x, int y){
    
    if(x == y){
        
        printf("%d",y);
        return x;
        
    }
    
    if(y%2 == 0){
        
        printf("%d ",y);
    }
    
    return imprimePar(x,y + 1);
}

int main(){
    
    int x;
    
    printf("\nInforme o numero: ");
    scanf("%d",&x);
    
    imprimePar(x,0);
    
    return 0;
}