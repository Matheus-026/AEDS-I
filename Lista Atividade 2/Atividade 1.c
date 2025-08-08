#include <stdio.h>
#include <stdlib.h>

/* Ler dois valores reais, determinar e escrever o menor e o maior */

int main()
{
    float A, B, maior, menor;

    printf("Digite 1 valor: ");
    scanf("%f", &A);
    printf("Digite 2 valor:");
    scanf("%f", &B);

    if(A > B){
        maior = A;
        menor = B;
    }else{
        maior = B;
        menor = A;
    }

    printf("O maior:%2.f\n", maior);
    printf("O menor:%2.f\n", menor);


 return 0;
}
