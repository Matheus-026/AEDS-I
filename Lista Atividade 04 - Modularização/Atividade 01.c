#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o int par(int n) que recebe um n�mero inteiro n e retorna o n-�simo
termo da sequ�ncia 2, 4, 6, 8, 10, 12...*/

int par(int n){
    return 2 * n;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    printf("O %d-�simo termo da sequ�ncia �: %d\n", n, par(n));

return 0;
}


