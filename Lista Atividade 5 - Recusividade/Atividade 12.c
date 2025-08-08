#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer um método recursivo que determine se um número é ou não primo. */

int primo_ou_nao(int n, int i){

    if(n <= 1){
        return 0;

    }else if(i > n / 2){
        return 1;

    }else if(n % i == 0){
        return 0;

    }else{
        return primo_ou_nao(n, i + 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resultado = primo_ou_nao(num,2);

    if(resultado == 1){
        printf("%d é primo.\n", num);
    }else{
        printf("%d não é primo.\n", num);
    }

 return 0;
}



