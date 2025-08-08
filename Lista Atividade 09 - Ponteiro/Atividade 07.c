#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase
(máx. 100 caracteres) e armazená-la num vetor. Imprima a frase lida trocando as vogais,
isto é, trocar ’a’ pelo ’u’, ’e’ pelo ’o’, ’i’ pelo ’u’, ’o’ pelo ’a’ e o ’u’ pelo ’e’. Usar uma
função void (procedimento) para realizar a troca e uma função para realizar a impressão
da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor. */

void trocar_vogais(char frase[]){

    for(int i = 0; frase[i] != '\0'; i++){

        if(frase[i] == 'a'){
            frase[i] = 'u';
        }else if(frase[i] == 'e'){
            frase[i] = 'o';
        }else if(frase[i] == 'i'){
            frase[i] = 'u';
        }else if (frase[i] == 'o'){
            frase[i] = 'a';
        }else if (frase[i] == 'u'){
            frase[i] = 'e';
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[101];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    trocar_vogais(frase);

    printf("Frase modificada: %s\n", frase);

 return 0;
}
