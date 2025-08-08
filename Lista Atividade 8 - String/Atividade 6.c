#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia uma string e imprima uma mensagem dizendo se ela eh um
palindromo ou nao. */

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

int verificarPalindromo(char string[], int tamanho){

    int i = 0, j = tamanho - 1;

    while(i < j){
        if(string[i] != string[j]){
            return 0; // Não é palíndromo
        }
        i++;
        j--;
    }
    return 1; // É palíndromo
}

int main()
{

    char string[100];

    Ler_string(string);

    int tamanho = tamanho_string(string);

    int palindromo = verificarPalindromo(string, tamanho);

    if(palindromo){
        printf("E um PALINDROMO!\n");
    }else{
        printf("Nao e um PALINDROMO\n");
    }

 return 0;
}
