#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Fazer uma função que recebe um número inteiro n, um número real x e retorna o somatório
dos n primeiros termos da sequência mostrada na questão anterior. */

// Função fatorial já existente
int fatorial(int n) {
    int resp = 1;
    if (n <= 1) {
        resp = 1;
    } else {
        resp = n * fatorial(n - 1);
    }
    return resp;
}

// Função para calcular o termo individual da sequência
double TermoSequencia(int n, double x) {

    double numerador = 2 * n * pow(x, n);

    int denominador = fatorial(2 * n + 1);

 return numerador / denominador;
}

// Nova função para calcular o somatório dos n primeiros termos
double SomatorioSequencia(int n, double x){

    double soma = 0.0;

    for(int i = 1; i <= n; i++){
        soma = soma + TermoSequencia(i, x);
    }

 return soma;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;
    double x;

    printf("Digite o número de termos n: ");
    scanf("%d", &n);

    printf("Digite o valor real x: ");
    scanf("%d", &x);

    double resultado = SomatorioSequencia(n, x);
    printf("O somatório dos %d primeiros termos da sequência é: %d\n", n, resultado);

 return 0;
}




