#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia dois valores inteiros e chame uma fun��o que receba estes 2
valores de entrada e retorne o maior valor na primeira vari�vel e o menor valor na segunda
vari�vel. Escreva o conte�do das 2 vari�veis na tela. */

void Maior_Menor_Valor(int a, int b, int *maior, int *menor){

    if(a > b){
        *maior = a;
        *menor = b;
    }else{
        *maior = b;
        *menor = a;
    }
}

int main()
{
    int A, B;
    int maior, menor;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    Maior_Menor_Valor(A, B, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

 return 0;
}



