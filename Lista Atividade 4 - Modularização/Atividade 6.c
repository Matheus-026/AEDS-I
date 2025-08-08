#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


double umSobreImpar(int n) {
    return 1.0 / (2 * n + 1);
}

int par(int n) {
    return 2 * n;
}

double parSobreImpar(int n) {
    return par(n + 1) / (1.0 / umSobreImpar(n));
}

double termoSequencia(int n, double x){
    return parSobreImpar(n - 1) * pow(x, n);
}

int main() {

    setlocale(LC_ALL, "Portuguese");
    int n;
    double x;

    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("Digite um valor para x: ");
    scanf("%lf", &x);

    if (n > 0) {
        printf("O %d� termo da sequ�ncia �: %.6f\n", n, termoSequencia(n, x));
    } else {
        printf("O valor de n deve ser maior que zero.\n");
    }

    return 0;
}

