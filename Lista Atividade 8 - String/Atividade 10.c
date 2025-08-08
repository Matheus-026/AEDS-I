#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva um programa que leia duas strings e as imprima em ordem alfabética */

int main()
{
    char texto1[100];
    char texto2[100];

    printf("Digite o primeiro texto: ");
    scanf("%s", texto1);

    printf("Digite o segundo texto: ");
    scanf("%s", texto2);

    if(strcmp(texto1, texto2) < 0){
        printf("Ordem alfabetica: \n%s\n%s\n", texto1, texto2);
    }else if(strcmp(texto1, texto2) > 0){
        printf("Ordem alfabetica: \n%s\n%s\n", texto2, texto1);
    }else{
        printf("As duas strings são iguais.\n");
    }

 return 0;
}




// FUNÇÃO

int compararStrings(char str1[], char str2[]) {

    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] < str2[i])
            return -1;  // str1 vem antes
        else if (str1[i] > str2[i])
            return 1;   // str2 vem antes
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
        return 0;  // Iguais
    else if (str1[i] == '\0')
        return -1; // str1 é menor
    else
        return 1;  // str2 é menor
}

int main()
{

    char texto1[100];
    char texto2[100];

    printf("Digite o primeiro texto: ");
    scanf("%s", texto1);

    printf("Digite o segundo texto: ");
    scanf("%s", texto2);

    int resultado = comparar_strings(texto1, texto2);

    if(resultado < 0){
        printf("Ordem alfabética:\n%s\n%s\n", texto1, texto2);
    }else if(resultado > 0){
        printf("Ordem alfabética:\n%s\n%s\n", texto2, texto1);
    }else{
        printf("As duas strings são iguais.\n");
    }

    return 0;
}
