#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler do teclado um n�mero inteiro com tr�s d�gitos (no formato CDU - centena, dezena
e unidade) e mostrar o n�mero invertido (no formato UDC). O n�mero invertido deve
ser armazenado em outra vari�vel antes de ser mostrado. */

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



