#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie dois vetores para armazenar 5 números inteiros cada. Solicite que o usuário insira os
valores para os dois vetores. Depois, crie e escreva um terceiro vetor onde cada elemento
seja a soma dos elementos correspondentes dos dois vetores lidos. */

int main(){

    setlocale(LC_ALL, "Portuguese");

    int v_a[5];
    int v_b[5];
    int v_resultado[5];

    printf("Primeiro Vetor.\n");
    for(int i = 0; i < 5; i++){
        printf("Digite %d numeros: ", i + 1);
        scanf("%d", & v_a[i]);
    }

    printf("\nSegundo Vetor.\n");
    for(int j = 0; j < 5; j++){
        printf("Digite %d numeros: ", j + 1);
        scanf("%d", & v_b[j]);
    }

    printf("\nResultado dos dois vetores.\n");
    for(int k = 0; k < 5; k++){
        v_resultado[k] = v_a[k] + v_b[k];

        printf("Posição %d: %d + %d = %d\n", k, v_a[k], v_b[k], v_resultado[k]);
    }

 return 0;
}


//COM FUNÇÕES

void preencherVetor(int vetor[]) {

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void somarVetores(int vetor_a[], int vetor_b[], int resultado[]) {
    for (int i = 0; i < 5; i++) {
        resultado[i] = vetor_a[i] + vetor_b[i];
    }
}

void exibirResultado(int vetor_a[], int vetor_b[], int resultado[]) {

    for (int i = 0; i < 5; i++) {
        printf("Posição %d: %d + %d = %d\n", i, vetor_a[i], vetor_b[i], resultado[i]);
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    int v_a[5], v_b[5], v_resultado[5];

    preencherVetor(v_a, "A");
    preencherVetor(v_b, "B");

    somarVetores(v_a, v_b, v_resultado);

    exibirResultado(v_a, v_b, v_resultado);

    return 0;
}
