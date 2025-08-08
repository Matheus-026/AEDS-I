#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler um número inteiro. Se ele for par calcular e escrever o seu quadrado e se for ímpar
calcular e escrever seu cubo. */

int main()
{
   int num, resultado;

   printf("Digite um numero: ");
   scanf("%i", &num);

   if(num % 2 == 0){
    resultado = num * num;
    printf("O numero e par, e seu quadrado e %i\n", resultado);
   }else{
    resultado = num * num * num;
    printf("O numero e impar, e seu cubo e %i\n", resultado);
   }

 return 0;
}

