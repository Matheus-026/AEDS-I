#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler três números reais a, b e c e mostrar o valor de y sendo y = a + b c + a + 2 ∗ (a − b) + log2(64). */

int main()
{
    float a, b, c, y;

    printf("Digite o primeiro valor: ");
    scanf("%f",&a);
    printf("Digite o segundo valor: ");
    scanf("%f",&b);
    printf("Digite o terceiro valor: ");
    scanf("%f",&c);

    y = a + b + c + a + 2 * (a - b) + log2(64);

    printf("O valor de y e %.2f \n", y);

 return 0;
}
