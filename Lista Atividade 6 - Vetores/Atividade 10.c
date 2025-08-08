#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, em seguida, crie e escreva um segundo vetor com os números do primeiro vetor em ordem
inversa. */

int main(){

    int v1[10], v2[10];

    for(int i = 0; i < 10; i++){
        printf("Digite %d numeros: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for(int i = 0; i < 10; i++){
        v2[i] = v1[9 - i]; // inversão
    }

    printf("\nVetor na ordem inversa:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

 return 0;
}


//COM FUNÇÃO

void preencherVetor(int vetor[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void inverterVetor(int vetor_origem[], int vetor_destino[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        vetor_destino[i] = vetor_origem[tamanho - 1 - i]; // Inversão
    }
}

void exibirVetor(int vetor[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {

    int v1[10], v2[10];
    int tamanho = 10;

    preencherVetor(v1, tamanho);  // Preenche v1
    inverterVetor(v1, v2, tamanho); // Inverte v1 em v2

    printf("\nVetor original:\n");
    exibirVetor(v1, tamanho);

    printf("\nVetor na ordem inversa:\n");
    exibirVetor(v2, tamanho);

    return 0;
}

