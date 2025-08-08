#include <stdio.h>
#include <stdlib.h>

/* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, fa�a uma fun��o
que retorne a soma do dobro dos dois n�meros lidos. A fun��o dever� armazenar o dobro
de A na pr�pria vari�vel A e o dobro de B na pr�pria vari�vel B. */

int dobrar(int *a, int *b){

    *a = *a * 2;
    *b = *b * 2;

 return *a + *b;
}

int main()
{
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int resultado = dobrar(&A, &B);

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("Soma dos valores dobrados = %d\n", resultado);

 return 0;
}
