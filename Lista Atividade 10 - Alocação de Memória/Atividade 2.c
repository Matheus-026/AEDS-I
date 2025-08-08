#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função chamada soma_elementos que receba um ponteiro para um array de
inteiros (alocado dinamicamente) e o tamanho do array. A função deve retornar a soma
de todos os elementos. Teste a função alocando um array de tamanho 5 no programa
principal, preenchendo-o com valores de sua escolha. */

int soma_elementos(int *vetor, int tamanho){

    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma = soma + vetor[i];
    }
 return soma;
}

int main()
{
    int *vetor;
    int tamanho = 5;

    vetor = (int *)malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++){
        printf("Valor de %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = soma_elementos(vetor, tamanho);
    printf("Soma dos elementos e: %d\n", resultado);

    free(vetor);

 return 0;
}
