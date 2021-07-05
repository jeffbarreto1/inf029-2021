#include<stdio.h>
#include<stdlib.h>


int MDC (int x, int y){

  if(y==0){
    return x;

  }
  
  else{
    return MDC(y,x%y);

  }

}

int main(){

    int x,y,result;


    printf("Informe o inteiro positivo x: ");
    scanf("%d",&x);

    printf("Informe o inteiro positivo y: ");
    scanf("%d",&y);

    result = MDC(x,y);

    printf("O MDC de %d e %d = %d\n",x,y,result);

}