#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Faça um algoritmo para percorrer uma string e imprimir apenas as vogais. */

int main()
{
    char string[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", string);

    printf("Vogais na string: ");

    for(int i = 0; string[i] != '\0'; i++){
        char c = tolower(string[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            printf("% c", string[i]);
        }
    }
    printf("\n");

 return 0;
}


