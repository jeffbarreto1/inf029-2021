#include <stdio.h>
#include <stdlib.h>

int potencia(int k, int n){
    
    if(n == 1){
        
        return k;
    }
    
    return k * potencia(k,n - 1);
    
}

int main(){
    
    
    int k,n;
    
    printf("\nInforme o valor de K: ");
    scanf("%d",&k);
    
    printf("\nInforme o valor de n: ");
    scanf("%d",&n);
    
    printf("\n Resultado %d", potencia(k,n));

    return 0;
}