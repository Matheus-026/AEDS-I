#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque os valores
das duas variáveis de forma que a variável A passe a ter o valor da variável B e
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
