#include <stdio.h>
#include <stdlib.h>

/* Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos
caracteres ela possui. */

int main()
{
    char string[100];
    int count = 0;

    printf("Digite uma frase/palavra: ");
    scanf("%[^\n]", string);

    for(int i = 0; string[i] != '\0'; i++){
        count++;
    }

    printf("A string tem %d caracteres.\n", count);

 return 0;
}


