#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array. */

int main()
{
    float vetor[10];
    float *ponteiro = vetor;

    for(int i = 0; i < 10; i++){
        printf("O endereco do vetor[%d]: %p\n", i, (ponteiro + i));
    }

 return 0;
}



