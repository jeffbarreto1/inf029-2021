#include <stdio.h>
#include <stdlib.h>

int superFat(int n){
	
	if(n == 0 || n == 1){
		
		return 1;
		
	}
	
	return fat(n) * superFat(n - 1);
	
}


int fat(int n){
	
	if(n == 1){
		
		return 1;
		
	}
	
	return n * fat(n - 1);
	
}

int main()
{
    
    int n;
    
    printf("\nInforme o numero: ");
    scanf("%d",&n);
    
    
    printf("\nO super fatorial de %d e: %d",n,superFat(n));
            
    
    
    return 0;
}