#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia e imprima uma string. */

void Ler_string(char string[]){

    printf("Digite uma palavra: ");
    scanf("%[^\n]", string);

}

int main()
{
    char string[100];

    Ler_string(string);

    printf("String: %s\n", string);

 return 0;
}
