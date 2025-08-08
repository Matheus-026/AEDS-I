#include <stdio.h>
#include <stdlib.h>

/* Implemente uma função que receba como parâmetro um array de números reais de tama-
nho N e retorne quantos números negativos há nesse array. Essa função deve obedecer
ao protótipo: int negativos(float *vet, int N); */

int negativos(float *vet, int N){

    float *ponteiro = vet;
    float *fim = vet + N;
    int contador = 0;

    while(ponteiro < fim){
        if(*ponteiro < 0){
            contador++;
        }
        ponteiro++;
    }
 return contador;
}

int main()
{
    int N;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    float vetor[N];

    for(int i = 0; i < N; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    int qtdNegativos = negativos(vetor, N);

    printf("Quantidade de numeros negativos: %d\n", qtdNegativos);

 return 0;
}
