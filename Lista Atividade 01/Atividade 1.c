#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escreva um programa que imprima na tela os senos de 3,14 e de 4,13. N�o se preocupe,
boa parte desse c�digo � novidade para voc�! No entanto, n�o � muito dif�cil deduzir
quais opera��es voc� precisa alterar (e criar) para imprimir os valores dos senos pedidos
nesta quest�o. Dica: Incluir a biblioteca <math.h> e usar a fun��o sin() para calcular o
seno. */

int main()
{
    float angulo1 = 3.14;
    float angulo2 = 4.13;

    printf("sen(3.14) = %.6f\n", sin(3.14));
    printf("sen(4.13) = %.6f\n", sin(4.13));

    return 0;
}


