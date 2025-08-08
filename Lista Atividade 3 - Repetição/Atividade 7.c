#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que mostre na tela os n primeiros elementos da sequência anterior que
forem divisíveis por três AND múltiplos de cinco OR divisíveis por sete*/

int main()
{
    int num, i, count;

    printf("Digite um termo: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        count = 1 + 2 * i;

    if((count % 3 == 0 && count % 5 == 0) || (count % 7 == 0)){
       printf("%d ", count);
    }
}
    printf("\n");

 return 0;
}

