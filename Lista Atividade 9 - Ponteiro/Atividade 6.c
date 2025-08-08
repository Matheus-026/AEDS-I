#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e
armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal. */

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
