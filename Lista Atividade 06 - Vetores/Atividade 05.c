#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Crie um vetor para armazenar 10 números inteiros. O vetor deve ser preenchido com
valores gerados aleatoriamente entre 5 e 20 e, em seguida, crie e escreva um segundo
vetor que contenha apenas os números pares presentes no primeiro vetor. */

int main(){

    int vetor1[10];
    int vetor2[10];
    int count_pares = 0;

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        vetor1[i] = rand() % 16 + 5;
    }

    for(int i = 0; i < 10; i++){
        if(vetor1[i] % 2 == 0){
            vetor2[count_pares] = vetor1[i];
            count_pares++;
        }
    }

    // Mostrar os vetores

    printf("Vetor original: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor com pares: ");
    for(int i = 0; i < count_pares; i++){
        printf("%d ", vetor2[i]);
    }

    printf("\n");

 return 0;
}





// Modularização

void preencherAleatorio(int v[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        v[i] = rand() % 16 + 5;
    }
}

int copiarPares(int origem[], int destino[], int tamanho) {
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        if (origem[i] % 2 == 0) {
            destino[j] = origem[i];
            j++;
        }
    }
    return j; // Retorna quantidade de pares encontrados
}

// Exibe os elementos de um vetor
void exibirVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v1[10];
    int v2[10]; // no máximo pode ter 10 pares
    int qt_pares;

    srand(time(NULL)); // Semente para números aleatórios diferentes a cada execução

    preencherAleatorio(v1, 10);

    printf("Vetor original: ");
    exibirVetor(v1, 10);

    qt_pares = copiarPares(v1, v2, 10);

    printf("Vetor com pares: ");
    exibirVetor(v2, qt_pares);

    return 0;
}
