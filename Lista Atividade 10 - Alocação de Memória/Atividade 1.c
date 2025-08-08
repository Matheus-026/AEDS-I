#include <stdio.h>
#include <stdlib.h>

/* Implemente um programa que aloque dinamicamente um array de 10 números inteiros.
Preencha o array com valores de 1 a 10 e, em seguida, imprima esses valores. Libere a
memória ao final. */

int main()
{
    int *vetor;

    vetor = (int *)malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++){
        vetor[i] = i + 1;
    }

    printf("Valores do vetor:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);

 return 0;
}
