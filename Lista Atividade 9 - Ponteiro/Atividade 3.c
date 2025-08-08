#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis
A e B, por exemplo, e, após a execução da função, A conterá o valor de B e B terá o valor
de A. */

void troca(int *a, int *b){

    int trocar = *a;
    *a = *b;
    *b = trocar;
}

int main()
{
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nPrimeira Troca.\n");
    printf("A = %d e B = %d\n", A, B);

    troca(&A,&B);

    printf("\nSegunda Troca.\n");
    printf("A = %d e B = %d\n", A, B);


 return 0;
}


