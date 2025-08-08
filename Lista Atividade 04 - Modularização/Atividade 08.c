#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função que recebe um número inteiro n e retorna o seu fatorial.*/

int fatorial(int n){
    int resp = 1;
    if(n <= 1){
        resp = 1;
    }else{
        resp = n * fatorial(n-1);
    }
    return resp;
}

int main(){

    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("O fatorial de %d é %d.\n", n, fatorial(n));

return 0;
}



