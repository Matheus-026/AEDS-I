#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Fazer um método recursivo que calcule o MDC (máximo divisor comum) de dois inteiros positivos m e n.
Escreva um programa em C que leia dois números do teclado e utilize este método para encontrar o MDC. */

int mdc_recursivo(int n, int m){

    if(n == 0){
        return m;
    }else{
        return mdc_recursivo(m % n, n);
    }
}

int main()
{
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("O MDC de %d e %d e %d\n", num1, num2, mdc_recursivo(num1, num2));

 return 0;
}


