#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia tr�s valores inteiros e chame uma fun��o que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira vari�vel,
o segundo menor valor na vari�vel do meio, e o maior valor na �ltima vari�vel. A fun��o
deve retornar o valor 1 se os tr�s valores forem iguais e 0 se existirem valores diferentes.
Exiba os valores ordenados na tela */

int ordenar_valor(int *a, int *b, int *c){

    int troca;
    if(*a > *b){
        troca = *a;
        *a = *b;
        *b = troca;
    }if(*a > *c){
        troca = *a;
        *a = *c;
        *c = troca;
    }if(*b > *c){
        troca = *b;
        *b = *c;
        *c = troca;
    }
    if(*a == *b && *b == *c){
        return 1; // valores iguais
    }else{
        return 0;
    }
}

int main()
{
    int x, y, z;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    int resultado = ordenar_valor(&x, &y, &z);

    printf("\nValores ordenados: %d, %d, %d\n", x, y, z);

    if(resultado == 1){
        printf("Todos os valores sao iguais.\n");
    }else{
        printf("Os valores sao diferentes.\n");
    }

 return 0;
}




