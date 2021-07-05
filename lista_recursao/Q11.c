#include <stdio.h>
#include <stdlib.h>

int mult(int x, int y){
    
    if(y == 1){
        
        return x;
    }
    
    return x + mult(x,y - 1);
}

int main()
{
    
    int x,y;
    
    printf("\nInforme um valor : ");
    scanf("%d",&x);
    
    printf("\nInforme a quantidade de vezes a ser multiplicado: ");
    scanf("%d",&y);
    
    printf("\nResultado: %d",mult(x,y));
    
    return 0;
}