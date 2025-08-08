#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função double umSobreImpar(int n) que recebe um número inteiro n e retorna
o n-ésimo termo da sequência 1 sobre 3, 1 sobre 5, 1 sobre 7, 1 sobre 9, 1 sobre 11, ... */

double umSobreImpar(int n){
    return 1.0 / (2 * n  + 1);
}

 int main(){

  setlocale(LC_ALL, "Portuguese");

  int n;

  printf("Digite um valor: ");
  scanf("%d", &n);

  printf("O %dº termo da sequência é: %.6f\n", n, umSobreImpar(n));

return 0;
}



