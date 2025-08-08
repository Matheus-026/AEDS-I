#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Escreva um programa em C para imprimir números pares ou ímpares em um determinado intervalo usando recursão. */

void pares_impares_intervalo(int inicio, int fim){

    if(inicio > fim){
        return;
    }

    if(inicio % 2 == 0){
        printf("%d e par.\n", inicio);
    }else{
        printf("%d e impar.\n", inicio);
    }
    pares_impares_intervalo(inicio + 1, fim);
}

int main()
{
    int inicio, fim;

    printf("Digite o intervalo p/ inicio e fim: ");
    scanf("%d %d", &inicio, &fim);

    pares_impares_intervalo(inicio, fim);

 return 0;
}


