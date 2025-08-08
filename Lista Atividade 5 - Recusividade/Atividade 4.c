#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer um m�todo recursivo que conte quantos d�gitos tem um determinado n�mero.
Escreva um programa em C que leia um n�mero do teclado e utilize este m�todo para contar e exibir o n�mero de d�gitos */

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

