#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 15 n�meros inteiros. Solicite que o usu�rio insira os valores
e, em seguida, calcule e escreva a soma de todos os n�meros �mpares do vetor. */

int main(){

    int v[15];
    int soma_impares = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);

        if(v[i] % 2 != 0){ // Verifica se � �mpar e soma
            soma_impares = soma_impares + v[i];
        }
    }

    printf("Soma dos numeros impares: %d\n", soma_impares);

 return 0;
}

