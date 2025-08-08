#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o que recebe um n�mero inteiro n e retorna o seu fatorial.*/

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

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);

    printf("O fatorial de %d � %d.\n", n, fatorial(n));

return 0;
}



