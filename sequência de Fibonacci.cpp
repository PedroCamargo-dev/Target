#include <stdio.h>

int main(void) 
{
    int n, fib = 0, aux = 0;    
    printf("Informe um numero para calcular a seq. de Fibonacci.\n ");

    scanf("%d", &n);
    if(n<=0){
    	printf("não pertence");
	}
    while(fib <1000) { 
        printf("%d-", fib);                   
        fib = fib + aux;                 
        aux = n;
        n = fib;        
    }
    
    if(fib == fib){
    	printf("pertence");
	}
  return 0;
}
