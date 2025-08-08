#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha uma fun��o que permita passar por par�metro dois
n�meros inteiros A e B. A fun��o dever� calcular a soma entre estes dois n�meros e
armazenar o resultado na vari�vel A. Esta fun��o n�o dever� possuir retorno, mas dever�
modificar o valor do primeiro par�metro. Imprima os valores de A e B na fun��o principal. */

void somar(int *a, int b){

    *a = *a + b;
}

int main()
{
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    somar(&A, B);

    printf("\nResultado apos a soma:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

 return 0;
}
