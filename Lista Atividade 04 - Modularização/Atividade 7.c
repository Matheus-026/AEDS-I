#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer uma função que recebe um número inteiro n, um real x e retorna o produto dos n
primeiros termos da sequência acima. Utilize a função desenvolvida na questão anterior. */


double umSobreImpar(int n){
    return 1.0 / (2 * n + 1);
}

int par(int n){
    return 2 * n;
}

double parSobreImpar(int n){
    return par(n + 1) / (1.0 / umSobreImpar(n)); // ou: return par(n + 1) * (2 * n + 1);
}

double termoSequencia(int n, double x){
    return parSobreImpar(n - 1) * pow(x, n); // Ajuste de índice para começar em 1
}

double produtoSequencia(int n, double x){
    double produto = 1.0;
    for(int i = 1; i <= n; i++){
        produto *= termoSequencia(i, x);
    }
    return produto;
}

int main(){

    int n;
    double x;

    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("Digite um valor para x: ");
    scanf("%lf", &x);

    if (n > 0) {
        printf("O produto dos %d primeiros termos da sequência é: %.6f\n", n, produtoSequencia(n, x));
    } else {
        printf("O valor de n deve ser maior que zero.\n");
    }

    return 0;
}


