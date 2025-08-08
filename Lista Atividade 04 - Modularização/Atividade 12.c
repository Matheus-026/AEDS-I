#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o que recebe um n�mero inteiro n e retorna o n-�simo termo da sequ�ncia
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

    printf("Digite a posi��o n na sequ�ncia de Fibonacci: ");
    scanf("%d", &n);

    printf("O %d-�simo termo da sequ�ncia de Fibonacci �: %d\n", n, Fibonacci(n));


return 0;
}





