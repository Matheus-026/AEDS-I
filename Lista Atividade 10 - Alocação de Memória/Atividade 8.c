#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que aloque dinamicamente um array de ‘n‘ inteiros, onde ‘n‘ é
informado pelo usuário. Preencha o array com valores fornecidos pelo usuário e use uma
função para calcular e retornar a média dos valores. Exiba a média e libere a memória
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
