#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Fazer uma fun��o que recebe um n�mero inteiro n, um n�mero real x e retorna o somat�rio
dos n primeiros termos da sequ�ncia mostrada na quest�o anterior. */

// Fun��o fatorial j� existente
int fatorial(int n) {
    int resp = 1;
    if (n <= 1) {
        resp = 1;
    } else {
        resp = n * fatorial(n - 1);
    }
    return resp;
}

// Fun��o para calcular o termo individual da sequ�ncia
double TermoSequencia(int n, double x) {

    double numerador = 2 * n * pow(x, n);

    int denominador = fatorial(2 * n + 1);

 return numerador / denominador;
}

// Nova fun��o para calcular o somat�rio dos n primeiros termos
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

    printf("Digite o n�mero de termos n: ");
    scanf("%d", &n);

    printf("Digite o valor real x: ");
    scanf("%d", &x);

    double resultado = SomatorioSequencia(n, x);
    printf("O somat�rio dos %d primeiros termos da sequ�ncia �: %d\n", n, resultado);

 return 0;
}




