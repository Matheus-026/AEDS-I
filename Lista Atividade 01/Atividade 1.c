#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escreva um programa que imprima na tela os senos de 3,14 e de 4,13. Não se preocupe,
boa parte desse código é novidade para você! No entanto, não é muito difícil deduzir
quais operações você precisa alterar (e criar) para imprimir os valores dos senos pedidos
nesta questão. Dica: Incluir a biblioteca <math.h> e usar a função sin() para calcular o
seno. */

int main()
{
    float angulo1 = 3.14;
    float angulo2 = 4.13;

    printf("sen(3.14) = %.6f\n", sin(3.14));
    printf("sen(4.13) = %.6f\n", sin(4.13));

    return 0;
}


