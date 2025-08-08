#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer um m�todo recursivo que recebe um n�mero inteiro n e retorna o n-�simo termo
da equa��o */

int termo(int n){

    int valor;
    if(n == 1){
        valor = 2;
    }else if(n == 2){
        valor = 3;
    }else{
        valor = 5 * n + pow(termo(n - 1), n);
    }
    return valor;
}

int main()
{
    int num;

    printf("Digite um valor para n: ");
    scanf("%d", &num);

    printf("O Termo(%d) = %d\n", num, termo(num));

 return 0;
}

