#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas 2
vari�veis e troque o seu conte�do, ou seja, esta fun��o � chamada passando duas vari�veis
A e B, por exemplo, e, ap�s a execu��o da fun��o, A conter� o valor de B e B ter� o valor
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


