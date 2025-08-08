#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o que recebe um n�mero inteiro n e imprima os n primeiros m�ltiplos de 5. */

void MultiplosDe5(int n){

    printf("Os %i primeiros m�ltiplos de 5 s�o:\n", n);

    for(int i = 1; i <= n; i++){
        printf("%d ", 5 * i);
    }
    printf("\n");
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um n�mero inteiro n: ");
    scanf("%i", &n);

    MultiplosDe5(n);

 return 0;
}






