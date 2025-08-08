#include <stdio.h>
#include <stdlib.h>

/*Seja a sequência da questão anterior, mostre somente os elementos maiores que a e menores que b, onde a e b são lidos do teclado.*/

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
