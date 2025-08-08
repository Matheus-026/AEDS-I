#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7, 9, ...*/

int main()
{
    int num, i;

    printf("Digite um termo: ");
    scanf("%i", &num);

    for(i = 0; i < num; i++){
        printf("%d ", 1 + 2 * i);
    }

    printf("\n");

 return 0;
}
