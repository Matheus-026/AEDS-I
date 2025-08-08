#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 5 n�meros inteiros. Solicite que o usu�rio insira os valores
e, em seguida, verifique e escreva se h� n�meros repetidos no vetor. Caso existam, mostre
quais s�o e quantas vezes aparecem. */

int main(){

    int v[5];

    // Leitura do vetor
    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nNumeros repetidos:\n");

    for(int i = 0; i < 5; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){ // Conta quantas vezes o n�mero v[i] aparece no vetor
            if(v[i] == v[j]){
                count++;
            }
        }
        // Se ele apareceu mais de uma vez, verificamos se j� mostramos esse n�mero
        if(count > 1){
            int verificado = 0;
            for(int k = 0; k < i; k++){    // Verifica se v[i] j� foi impresso antes
                if(v[i] == v[k]){
                    verificado = 1;
                }
            }
            // Se ainda n�o foi impresso, mostramos agora
            if(verificado == 0){
                printf("Numero %d aparece %d vezes\n", v[i], count);
            }
        }
    }

return 0;
}

