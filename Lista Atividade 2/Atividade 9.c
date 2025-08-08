#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler um número real. Determinar e escrever se ele é maior, menor ou igual a zero. */

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

