#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie dois vetores para armazenar 10 números inteiros cada. Solicite que o usuário insira
os valores e, em seguida, crie e escreva um terceiro vetor que contenha apenas os números
que aparecem em ambos os vetores (interseção). */

int main(){

    int v1[10], v2[10], intersecao[10];
    int contador = 0;

    for(int i = 0; i < 10; i++){
        printf("v1[%d]: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("v2[%d]: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){

            if(v1[i] == v2[j]){
                int repetido = 0; // variavel de parada
                for(int k = 0; k < contador; k++){
                    if(intersecao[k] == v1[i]){
                        repetido = 1;
                    }
                }
                if(!repetido){
                    intersecao[contador] = v1[i];
                    contador++;
                }
            }
        }
    }
    // Exibe a interseção
    printf("\nElementos comuns aos dois vetores:\n");

    if(contador == 0){
        printf("Nenhum elemento em comum.\n");
    }else{
        for(int i = 0; i < contador; i++){
            printf("%d ", intersecao[i]);
        }
        printf("\n");
    }

 return 0;
}

