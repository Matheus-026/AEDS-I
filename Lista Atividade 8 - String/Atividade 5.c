#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada
dentro da mesma variável. Em seguida, imprima a string invertida */

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

void inverter_string(char string[], int tamanho) {
    int i = 0, j = tamanho - 1;
    while(i < j) {
        char troca = string[i];
        string[i] = string[j];
        string[j] = troca;
        i++;
        j--;
    }
}

int main()
{
    char string[100];

    Ler_string(string);

    int tamanho = tamanho_string(string);

    inverter_string(string, tamanho);

    printf("String invertida: %s\n", string);

 return 0;
}




