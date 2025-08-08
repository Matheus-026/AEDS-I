#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido. */

int main()
{
    int vetor[5];
    int *ponteiro = vetor;

    for(int i = 0; i < 5; i++){
        printf("Digite %d numeros: ", i + 1);
        scanf("%d", ponteiro + i);
    }

    printf("\nDobro dos valores:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(ponteiro + i) * 2);
    }
    printf("\n");

 return 0;
}
