#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler dois n�meros reais e salv�-los nas vari�veis A e B. Em seguida, troque os valores
das duas vari�veis de forma que a vari�vel A passe a ter o valor da vari�vel B e
vice-versa. No final, mostre os valores finais */

int main()
{
    float A, B, temp;

    printf("Digite um valor: ");
    scanf("%f",&A);
    printf("Digite um valor: ");
    scanf("%f",&B);

    temp = A;
    A = B;
    B = temp;

    printf("Trocando:\n");
    printf("A = %.2f\n", A);
    printf("B = %.2f\n", B);

    return 0;
}
