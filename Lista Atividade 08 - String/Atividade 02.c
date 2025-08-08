#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma string e imprima as quatro primeiras letras dela. */

void Ler_string(char string[]){

    printf("Digite uma palavra: ");
    scanf("%[^\n]", string);
}

int main()
{
    char string[100];

    Ler_string(string);

    printf("As quatro primeiras letras sao: ");
    printf("%.4s", string);

 return 0;
}

