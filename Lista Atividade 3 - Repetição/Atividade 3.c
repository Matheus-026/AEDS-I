#include <stdio.h>
#include <stdlib.h>

/*Faça um programa para calcular o N-ésimo termo da sequência de Fibonacci (1, 1, 2, 3, 5, 8, 13, 21, ...)*/

int main()
{
    int num, i = 3;
    int fib = 1, a = 1, b = 1;

    printf("Digite o valor de n: ");
    scanf("%i", &num);

    if(num <= 2){
        fib = 1;
    }else{
        while(i <= num){
            fib = a + b;
            a = b;
            b = fib;
            i++;
        }
    }
     printf("O %i termo da sequencia de Fibonacci e: %i\n", num, fib);

 return 0;
}

