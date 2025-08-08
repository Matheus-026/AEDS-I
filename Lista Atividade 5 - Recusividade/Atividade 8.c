#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer um método recursivo que recebe um número inteiro e retorna o seu fatorial. */

int fatorial_rec(int n){

    int fat;
    if(n <= 1){
        fat = 1;
    }else{
        fat = n * fatorial_rec(n - 1);
    }
    return fat;
}

int main()
{
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    printf("O fatorial de %d e %d\n", num, fatorial_rec(num));


 return 0;
}


