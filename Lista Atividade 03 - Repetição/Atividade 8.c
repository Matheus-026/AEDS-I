#include <stdio.h>
#include <stdlib.h>

/*Seja a sequ�ncia da quest�o anterior, mostre somente os elementos maiores que a e menores que b, onde a e b s�o lidos do teclado.*/

int main()
{
    int num, i, a, b , count;

    printf("Digite um termo: ");
    scanf("%i", &num);

    printf("Digite um valor para A: ");
    scanf("%i", &a);

    printf("Digite um valor para B: ");
    scanf("%i", &b);

    for(i = 0; i < num; i++){
        printf("%d ", 1 + 2 * i);

    if(count > a && count < b){
        printf("%d ", count);
    }
    }
    printf("\n");

 return 0;
}
