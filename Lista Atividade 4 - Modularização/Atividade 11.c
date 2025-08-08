#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função que recebe um número inteiro n e imprima os n primeiros múltiplos de 5. */

void MultiplosDe5(int n){

    printf("Os %i primeiros múltiplos de 5 são:\n", n);

    for(int i = 1; i <= n; i++){
        printf("%d ", 5 * i);
    }
    printf("\n");
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número inteiro n: ");
    scanf("%i", &n);

    MultiplosDe5(n);

 return 0;
}






