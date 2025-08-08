#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena
e unidade) e mostrar o número invertido (no formato UDC). O número invertido deve
ser armazenado em outra variável antes de ser mostrado. */

int main()
{
    int num, c, d ,u, numinv;

    printf("Digite um numero: ");
    scanf("%i", &num);

    c = num / 100;
    d =(num % 100) / 10;
    u = num % 10;

    numinv = u*100 + d*10 + c;

    printf("O valor invertido e: %i\n", numinv);

    return 0;
}



