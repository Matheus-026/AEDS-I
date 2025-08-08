#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o que recebe um n�mero inteiro n, um n�mero real x e retorna o n-�simo
termo da sequ�ncia abaixo. Utilize as fun��es desenvolvidas anteriormente.*/

int fatorial(int n) {
    int resp = 1;
    if (n <= 1) {
        resp = 1;
    } else {
        resp = n * fatorial(n - 1);
    }
    return resp;
}

// Fun��o para calcular o n-�simo termo da sequ�ncia
double termo_sequencia(int n, double x){

    double numerador = 2 * n * pow(x, n);
    int denominador = fatorial(2 * n + 1);

 return numerador / denominador;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;
    double x;

    printf("Digite um n�mero inteiro n: ");
    scanf("%d", &n);

    printf("Digite um n�mero real x: ");
    scanf("%d", &x);

    double resultado = termo_sequencia(n, x);
    printf("O %d-�simo termo da sequ�ncia �: %lf\n", n, resultado);

    return 0;
}


