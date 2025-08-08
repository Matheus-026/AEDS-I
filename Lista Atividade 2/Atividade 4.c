#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Ler os coeficientes de uma equa��o do primeiro grau (ax + b = 0), calcular e escrever a
raiz da equa��o. */

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
            printf("A equa��o possui infinitas solu��es.\n");
        }else{
            printf("A equa��o n�o possui solu��o.\n");
        }
    }else{
        x = -b / a;
        printf("A raiz da equa��o � x = %.2f\n", x);
    }

    return 0;
}
