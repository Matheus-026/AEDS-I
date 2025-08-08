#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer um método recursivo que conte quantos dígitos tem um determinado número.
Escreva um programa em C que leia um número do teclado e utilize este método para contar e exibir o número de dígitos */

int contardigito(int num){

    if(num / 10 == 0){
        return 1;
    }else{
        return 1 + contardigito(num / 10);
    }
}

int main()
{
    int num = 1000;

    printf("O numero de digitos de %d e: %d\n", num, contardigito(num));

 return 0;
}

