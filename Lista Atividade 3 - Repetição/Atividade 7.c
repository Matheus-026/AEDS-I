#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que mostre na tela os n primeiros elementos da sequ�ncia anterior que
forem divis�veis por tr�s AND m�ltiplos de cinco OR divis�veis por sete*/

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

