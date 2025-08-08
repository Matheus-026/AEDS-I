#include <stdio.h>
#include <stdlib.h>

/*Fazer um programa para ler n números inteiros e imprimir a soma deles. O valor de n deve ser lido do teclado.*/

int main()
{
    int n, num, i = 0, soma = 0;

    printf("Digite a quantidade de numeros para a soma: ");
    scanf("%i", &n);

    while(i < n){
        printf("Digite o %i numero: ", i + 1);
        scanf("%i",&num);
        soma = soma + num;
        i++;
    }

    printf("A soma dos %i numeros e: %i\n",n, soma);

 return 0;
}

