#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler um n�mero real. Determinar e escrever se ele � maior, menor ou igual a zero. */

int main()
{
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

     if(num > 0){
        printf("Esse numero e maior que zero. \n");
    }else if(num < 0){
            printf("Esse numero e menor que zero. \n");
            }else{
                printf("Esse numero e igual a zero");
            }

 return 0;
}

