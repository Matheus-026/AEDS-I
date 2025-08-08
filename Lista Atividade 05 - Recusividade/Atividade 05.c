#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Escreva um programa em C para encontrar a soma dos dígitos de um número usando recursão. */

int soma_digitos_rec(int n){

    if(n == 0){
        return 0;
    }else{
        return (n % 10) + soma_digitos_rec(n / 10);
    }
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("A soma dos digitos %d e %d\n", num, soma_digitos_rec(num));

 return 0;
}

