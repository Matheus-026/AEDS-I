#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda
variável. Escreva o conteúdo das 2 variáveis na tela. */

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



