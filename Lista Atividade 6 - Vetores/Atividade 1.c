#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, após a leitura, escreva cada elemento do vetor e a sua respectiva posição no formato:
"Elemento [valor] na posição [índice]". */

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Insira %d digitos: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nSaida:\n");

    for(int i = 0; i < 10; i++){
        printf("Elemento %d na posição %d\n", vetor[i], i);
    }

 return 0;
}


/* Com FUNÇÃO */

void exibirVetor(int v[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d na posição %d\n", v[i], i);
    }
}

int main(){

    int v[10];

    for(int i = 0; i < 10; i++){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nSaída:\n");

    exibirVetor(v, 10);

    return 0;
}
