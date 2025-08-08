#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 5 números inteiros. Solicite que o usuário insira os valores
e, em seguida, verifique e escreva se há números repetidos no vetor. Caso existam, mostre
quais são e quantas vezes aparecem. */

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
        for(int j = 0; j < 5; j++){ // Conta quantas vezes o número v[i] aparece no vetor
            if(v[i] == v[j]){
                count++;
            }
        }
        // Se ele apareceu mais de uma vez, verificamos se já mostramos esse número
        if(count > 1){
            int verificado = 0;
            for(int k = 0; k < i; k++){    // Verifica se v[i] já foi impresso antes
                if(v[i] == v[k]){
                    verificado = 1;
                }
            }
            // Se ainda não foi impresso, mostramos agora
            if(verificado == 0){
                printf("Numero %d aparece %d vezes\n", v[i], count);
            }
        }
    }

return 0;
}

