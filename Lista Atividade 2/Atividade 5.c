#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler os coeficientes de uma equa��o do 2� grau, determinar e escrever suas ra�zes reais ou
imagin�rias. */

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

    // Verifica��o se � uma equa��o do 2� grau
    if (a == 0) {
        printf("Isso n�o � uma equa��o do segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Ra�zes reais e diferentes:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Ra�zes reais e iguais:\n");
            printf("x = %.2f\n", x1);
        } else {
            real = -b / (2 * a);
            imag = sqrt(-delta) / (2 * a);
            printf("Ra�zes complexas (imagin�rias):\n");
            printf("x1 = %.2f + %.2fi\n", real, imag);
            printf("x2 = %.2f - %.2fi\n", real, imag);
        }
    }

 return 0;
}

