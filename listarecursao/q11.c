#include <stdio.h>
#include <stdlib.h>


int imprimePar(int n, int i){
    
    if(n == i){
        
        printf("%d",i);
        return n;
        
    }
    
    if(i%2 == 0){
        
        printf("%d ",i);
    }
    
    return imprimePar(n,i + 1);
}

int main(){
    
    int n;
    
    printf("\nInforme o numero: ");
    scanf("%d",&n);
    
    imprimePar(n,0);
    
    return 0;
}