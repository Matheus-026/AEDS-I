#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função que recebe um número inteiro n, um número real x e retorna o n-ésimo
termo da sequência abaixo. Utilize as funções desenvolvidas anteriormente.*/

int fatorial(int n) {
    int resp = 1;
    if (n <= 1) {
        resp = 1;
    } else {
        resp = n * fatorial(n - 1);
    }
    return resp;
}

// Função para calcular o n-ésimo termo da sequência
double termo_sequencia(int n, double x){

    double numerador = 2 * n * pow(x, n);
    int denominador = fatorial(2 * n + 1);

 return numerador / denominador;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;
    double x;

    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    printf("Digite um número real x: ");
    scanf("%d", &x);

    double resultado = termo_sequencia(n, x);
    printf("O %d-ésimo termo da sequência é: %lf\n", n, resultado);

    return 0;
}


