#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do teclado.
Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o. */

int main()
{
    int x, y;
    int *maior;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if(&x > &y){
        maior = &x;
    }else{
        maior = &y;
    }

    printf("O conteudo do maior endereco de memoria e: %d\n", *maior);

 return 0;
}

