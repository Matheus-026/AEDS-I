#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer um método recursivo que recebe um número inteiro e positivo n e calcula o somatório abaixo:
n + (n − 1) + . . . + 1 + 0 */

int somatorio(int n){

    int resp;
    if(n == 0){
        resp = 0;
    }else{
        resp = n + somatorio(n - 1);
    }
return resp;
}

int main()
{
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("O somatorio de %d e %d\n", num, somatorio(num));

 return 0;
}


