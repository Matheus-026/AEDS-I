#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Escreva um programa em C para imprimir na tela os 50 primeiros números naturais usando recursão */

void recursivo(int n){

    if(n <= 50){
        printf("%d ", n);
        recursivo(n + 1);
    }
}

int main()
{
    int n = 1;
    recursivo(n);

 return 0;
}
