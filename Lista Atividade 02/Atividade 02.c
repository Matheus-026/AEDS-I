#include <stdio.h>
#include <stdlib.h>

/* Fazer um programa para ler dois n�meros inteiros e calcular e imprimir a diferen�a desses
n�meros. Depois, se o segundo n�mero for diferente de zero, fazer a divis�o do primeiro
pelo segundo. */

int main()
{
    int A, B, resultado;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%i", &A);
    printf("Digite o segundo numero: ");
    scanf("%i", &B);

    resultado = A - B;

    printf("O resultado de %i\n", resultado);

    if(B != 0){

        divisao = A / B;

        printf("Divisao: %.2f\n", divisao);
    }

 return 0;
}
