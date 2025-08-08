#include <stdio.h>
#include <stdlib.h>

/* Crie um programa em C que aloque dinamicamente um array de �n� inteiros, onde �n� �
informado pelo usu�rio. Ap�s a aloca��o, solicite ao usu�rio que insira os valores de cada
elemento do array. Em seguida, imprima os valores e libere a mem�ria alocada */

int main()
{
    int *vetor;
    int n;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores inseridos:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);

 return 0;
}
