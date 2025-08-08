#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler os coeficientes de uma equação do 2º grau, determinar e escrever suas raízes reais ou
imaginárias. */

int main()
{
    int main() {
    float a, b, c;
    float delta, x1, x2, real, imag;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Verificação se é uma equação do 2º grau
    if (a == 0) {
        printf("Isso não é uma equação do segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raízes reais e diferentes:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Raízes reais e iguais:\n");
            printf("x = %.2f\n", x1);
        } else {
            real = -b / (2 * a);
            imag = sqrt(-delta) / (2 * a);
            printf("Raízes complexas (imaginárias):\n");
            printf("x1 = %.2f + %.2fi\n", real, imag);
            printf("x2 = %.2f - %.2fi\n", real, imag);
        }
    }

 return 0;
}

