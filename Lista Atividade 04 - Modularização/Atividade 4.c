#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função double somaUmSobreImpar(int n) que recebe um número inteiro n
e retorna o valor do somatório dos n primeiros termos da sequência anterior. A sua
função somaUmSobreImpar deve utilizar a função umSobreImpar desenvolvida na questão
anterior. */

double umSobreImpar(int n){
    return 1.0 / (2 * n + 1);
}

double somaUmSobreImpar(int n){
    double soma = 0.0;
    for(int i = 0; i < n; i++){
        soma = soma + umSobreImpar(i);
    }
    return soma;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if(n > 0){
        printf("O %dº termo da sequência é: %.6f\n", n, umSobreImpar(n - 1));
        printf("A soma dos %d primeiros termos da sequência é: %.6f\n", n, somaUmSobreImpar(n));
    }else{
        printf("O valor de n deve ser maior que zero.\n");
    }

 return 0;
}


