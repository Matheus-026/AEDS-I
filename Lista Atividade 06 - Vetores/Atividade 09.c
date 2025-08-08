#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 10 números reais. Solicite que o usuário insira os valores e,
em seguida, organize os números do vetor em ordem crescente e escreva o vetor ordenado. */

int main(){

    float v[10];

    for(int i = 0; i < 10; i++){
        printf("Digite %d numeros: ", i + 1);
        scanf("%f", & v[i]);
    }

    // Ordenação (usando o método da bolha - Bubble Sort)
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(v[j] > v[j+1]){
                float troca = v[j];
                v[j] = v[j+1];
                v[j+1] = troca;
            }
        }
    }

    printf("\nVetor em ordem crescente:\n");

    for(int i = 0; i < 10; i++){
        printf("%.2f ", v[i]);
    }

    printf("\n");

 return 0;
}






//COM FUNÇÃO

void preencherVetor(float vetor[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

// Função para ordenar o vetor (Bubble Sort)
void ordenarVetor(float vetor[], int tamanho) {

    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = 0; j < tamanho - 1 - i; j++) {
            if(vetor[j] > vetor[j + 1]) {
                float troca = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = troca;
            }
        }
    }
}

void exibirVetor(float vetor[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main() {

    float v[10];
    int tamanho = 10;

    preencherVetor(v, tamanho);  // Preenche o vetor
    ordenarVetor(v, tamanho);    // Ordena o vetor
    exibirVetor(v, tamanho);     // Exibe o vetor ordenado

    return 0;
}
