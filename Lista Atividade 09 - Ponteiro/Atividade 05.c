#include <stdio.h>
#include <stdlib.h>

/* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B. */

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
