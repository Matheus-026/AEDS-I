#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a
raiz da equação. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    if(a == 0){
        if(b == 0){
            printf("A equação possui infinitas soluções.\n");
        }else{
            printf("A equação não possui solução.\n");
        }
    }else{
        x = -b / a;
        printf("A raiz da equação é x = %.2f\n", x);
    }

    return 0;
}
