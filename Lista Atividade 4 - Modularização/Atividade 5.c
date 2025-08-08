#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int par(int n){
    return 2 * n;
}

double umSobreImpar(int n){
    return 1.0 / (2 * n + 1);
}

double parSobreImpar(int n){
    return par(n + 1) / (1.0 / umSobreImpar(n)); // ou: return par(n + 1) * (2 * n + 1);
}

double somaParSobreImpar(int n){
    double soma = 0.0;
    for(int i = 0; i < n; i++){
        soma = soma + parSobreImpar(i);
    }
    return soma;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if(n > 0){
        printf("O %dº termo da sequência parSobreImpar é: %.6f\n", n, parSobreImpar(n - 1));
        printf("A soma dos %d primeiros termos da sequência é: %.6f\n", n, somaParSobreImpar(n));
    }else{
        printf("O valor de n deve ser maior que zero.\n");
    }

    return 0;
}

