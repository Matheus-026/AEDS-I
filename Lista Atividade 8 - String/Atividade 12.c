#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres minusculos. */

int main()
{
    char string[100];
    int count = 0;

    printf("Digite uma frase: ");
    scanf(" %[^\n]", string);

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            count++;
        }
    }
    printf("A quantidade de caracteres minusculos sao:%d\n", count);

 return 0;
}



