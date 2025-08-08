#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo
termo da sequência 2, 4, 6, 8, 10, 12...*/

int par(int n){
    return 2 * n;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("O %d-ésimo termo da sequência é: %d\n", n, par(n));

return 0;
}


