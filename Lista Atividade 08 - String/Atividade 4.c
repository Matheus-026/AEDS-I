#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma string e a imprima de trás para frente. */

void Ler_string(char string[]){

    printf("Digite uma palavra: ");
    scanf("%[^\n]", string);
}

int tamanho_string(char string[]){

    int tamanho = 0;
    while(string[tamanho] != '\0'){
        tamanho++;
    }
 return tamanho;
}

void inverterImprimir(char string[], int tamanho){

    printf("String invertida: ");
    for(int i = tamanho - 1; i >= 0; i--){
        printf("%c", string[i]);
    }
    printf("\n");
}

int main()
{
    char string[100];

    Ler_string(string);

    int tamanho = tamanho_string(string);

    inverterImprimir(string, tamanho);

 return 0;
}



