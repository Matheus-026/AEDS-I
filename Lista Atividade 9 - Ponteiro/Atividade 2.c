#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */

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

