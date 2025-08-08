#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o que recebe um n�mero inteiro n e retorna o maior elemento da sequ�ncia
de Fibonacci que seja menor que n. */

int Fib_Maior_Menor_Que_N(int n){

    int resp;
    if(n <= 1){
        resp = 0;
    }if(n == 2){
        resp = 1;
    }else{

    int a = 0, b = 1, c = 0;

    while(b < n){
    c = a + b;
    a = b;
    b = c;
    }
    resp = a;
}
return resp;
}

int main(){

    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &num);

    int resultado = Fib_Maior_Menor_Que_N(num);
    printf("O maior n�mero de Fibonacci menor que %i �: %i\n", num, resultado);

return 0;
}





