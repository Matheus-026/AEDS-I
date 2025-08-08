#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as vari�veis aos ponteiros (use &). Modifique os valores de cada
vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a modifica��o. */

int main()
{
    int x = 10;
    float y = 2.2;
    char c = 'A';

    int *px;
    float *py;
    char *pc;

    px = &x;
    py = &y;
    pc = &c;

    printf("\nAntes da modificacao:\n");
    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("c = % c\n", c);

    *px = 20;
    *py = 4.4;
    *pc = 'Z';

    // Imprimindo os valores ap�s a modifica��o
    printf("\nApos a modificacao:\n");
    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("c = % c\n", c);

 return 0;
}
