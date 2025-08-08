#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Escreva um programa em C para calcular a soma dos números de 1 a n usando recursão. */

int somarecursiva(int n){

    int resp;
    if(n <= 1){
        resp = 1;
    }else{
        resp = n + somarecursiva(n - 1);
    }
return resp;
}

int main()
{
    int n;

    printf("Digite um valor para soma: ");
    scanf("%d", &n);

    printf("A soma de 1 a %d = %d\n", n, somarecursiva(n));

 return 0;
}

