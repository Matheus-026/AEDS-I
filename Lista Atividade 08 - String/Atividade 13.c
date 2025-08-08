#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres maiusculos. */

int main()
{
    char string[100];
    int count = 0;

    printf("Digite uma frase: ");
    scanf(" %[^\n]", string);

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            count++;
        }
    }
    printf("A quantidade de caracteres maiusculos sao:%d\n", count);

 return 0;
}


// QUESTÃO 12 e 13 JUNTAS


int contar_minusculas(char str[]){

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            count++;
        }
    }
    return count;
}

int contar_maiusculas(char str[]){

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            count++;
        }
    }
    return count;
}

int main() {

    char string[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", string);

    int minusculas = contar_minusculas(string);
    int maiusculas = contar_maiusculas(string);

    printf("Quantidade de letras minúsculas: %d\n", minusculas);
    printf("Quantidade de letras maiúsculas: %d\n", maiusculas);

    return 0;
}



