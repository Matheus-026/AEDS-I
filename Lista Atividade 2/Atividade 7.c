#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler dois caracteres e escrevê-los em ordem alfabética. */

int main()
{
    char c1, c2;

    printf("Digite uma palavra: ");
    scanf(" %c", &c1);
    printf("Digite uma palavra: ");
    scanf(" %c", &c2);

    if(c1 < c2){
        printf("Ordem alfabetica: %c %c\n", c1, c2);
    }else{
        printf("Ordem alfabetica: %c %c\n", c2, c1);
    }

 return 0;
}
