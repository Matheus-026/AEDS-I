#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função que recebe um número inteiro n e retorna o n-ésimo termo da sequência
de Fibonacci. */

int Fibonacci(int n){

    int resp;
    if(n <= 0){
        resp = 0;
    }else if(n == 1){
        resp = 1;
    }else{
        int a = 1, b = 0, c;

  for(int i = 2; i <= n; i++){
    c = a + b;
    a = b;
    b = c;
  }
    resp = b;
  }
 return resp;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite a posição n na sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, Fibonacci(n));


return 0;
}





