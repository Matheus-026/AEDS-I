#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que aloque dinamicamente um array de 5 inteiros, preencha-o com
valores fornecidos pelo usuário e exiba o maior valor presente no array. Depois, libere a
memória. */

int main()
{
    int *vetor, maior;

    vetor = (int*) malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for(int i = 1; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("\nMaior valor digitado: %d\n", maior);

    free(vetor);

 return 0;
}
