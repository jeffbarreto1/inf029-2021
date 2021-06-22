#include <stdio.h>
#include <stdlib.h>


int tetran(int n){
	
	if(n == 0 || n == 1 || n == 2){
		
		return 0;
	}
	
	if(n == 3){
		
		return 1;
		
	}
	
	return tetran(n - 1) + tetran(n - 2) + tetran(n - 3) + tetran(n - 4);
	
}

int main(){
    
    int n;
    
    printf("\nInforme o numero: ");
    scanf("%d",&n);
    
    
    printf("\nO %d termo da sequencia de tetranacci e: %d",n, tetran(n));
            
    
    
    return 0;
}