#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que aloque dinamicamente um array de �n� inteiros, onde �n� �
informado pelo usu�rio. Preencha o array com valores fornecidos pelo usu�rio e use uma
fun��o para calcular e retornar a m�dia dos valores. Exiba a m�dia e libere a mem�ria
ao final. */

float calcular_media(int *vetor, int n){

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma = soma + vetor[i];
    }

 return soma / n;
}

int main()
{
    int *vetor, n;

    printf("Digite a quantidade dos valores: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    printf("Digite os %d valores:\n", n);

    for(int i = 0; i < n; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    float media = calcular_media(vetor, n);

    printf("Media dos valores: %.2f\n", media);

    free(vetor);

 return 0;
}
