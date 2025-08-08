#include <stdio.h>
#include <stdlib.h>

/* Ler um número inteiro, verificar e escrever se ele é divisível ou não por 7. */

int main()
{
    int num;

    printf("Escreva um numero: ");
    scanf("%i", &num);

    if(num % 7 == 0){
    printf("O numero e divisivel por 7.\n");
    } else {
    printf("O numero nao e divisivel por 7.\n");
    }

 return 0;
}
