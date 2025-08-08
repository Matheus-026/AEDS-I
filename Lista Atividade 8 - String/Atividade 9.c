#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie um programa que utilize a o código de Cesar para três posições. Entre com uma
string e imprima a string criptografada. */

int main() {

    char string[100];
    int tamanho = 0;

    printf("Digite uma frase para criptografar: ");
    scanf(" %[^\n]", string);

    while(string[tamanho] != '\0'){
        tamanho++;
    }

    for(int i = 0; i < tamanho; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] = (string[i] - 'a' + 3) % 26 + 'a';
        }else if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] = (string[i] - 'A' + 3) % 26 + 'A';
        }
    }

    printf("Texto criptografado: %s\n", string);

    return 0;
}
