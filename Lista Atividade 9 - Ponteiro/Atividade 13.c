#include <stdio.h>
#include <stdlib.h>

/* Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros */

void imprimirArray(int *array, int tamanho){

    int *ptr = array;
    int *fim = array + tamanho;

    while (ptr < fim){
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};

    imprimirArray(vetor, 5);

 return 0;
}

