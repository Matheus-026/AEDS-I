#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 10 números reais. Solicite que o usuário insira os valores
e, em seguida, determine e escreva o maior valor do vetor e a sua posição. */

int main(){

    float vetor[10];
    float maior;
    int posicao_inicial;

    maior = vetor[0];
    posicao_inicial = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite %d numeros: ", i + 1);
        scanf("%f", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
            posicao_inicial = i;
        }
    }
    printf("\nO maior valor: %.2f na posição %d\n", maior, posicao_inicial);

 return 0;
}
