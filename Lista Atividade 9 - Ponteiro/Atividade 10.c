#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares. */

int main()
{
    int vetor[5];
    int *ponteiro = vetor;

    for(int i = 0; i < 5; i++){
        printf("Digite %d numeros: ", i + 1);
        scanf("%d", ponteiro + i);
        }

    printf("\nEnderecos dos valores pares:\n");
    for(int i = 0; i < 5; i++){
        if(*(ponteiro + i) % 2 == 0){
            printf("%p\n", (ponteiro + i));
        }
    }

 return 0;
}



