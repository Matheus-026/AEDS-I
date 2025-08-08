#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o double somaUmSobreImpar(int n) que recebe um n�mero inteiro n
e retorna o valor do somat�rio dos n primeiros termos da sequ�ncia anterior. A sua
fun��o somaUmSobreImpar deve utilizar a fun��o umSobreImpar desenvolvida na quest�o
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
        printf("O %d� termo da sequ�ncia �: %.6f\n", n, umSobreImpar(n - 1));
        printf("A soma dos %d primeiros termos da sequ�ncia �: %.6f\n", n, somaUmSobreImpar(n));
    }else{
        printf("O valor de n deve ser maior que zero.\n");
    }

 return 0;
}


