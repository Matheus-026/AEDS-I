#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Escreva um programa em C para imprimir a série Fibonacci usando recursão. */

int fibonacci(int n){

    int fib = 0;
    if(n == 0 || n == 1){
        fib = 1;
    }else{
        fib = fibonacci(n - 1) + fibonacci(n - 2);
    }
 return fib;
}

int main()
{
    int n;

    printf("Digite um termo: ");
    scanf("%d", &n);

    printf("O termo %d da sequencia de Fibonacci e: %d\n", n, fibonacci(n));

 return 0;
}

