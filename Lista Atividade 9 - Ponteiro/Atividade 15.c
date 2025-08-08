#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função. */

int Encontrar_Min_Max(int *vetor, int tamanho, int *max, int *min){

    *min = *max = vetor[0];

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] < *min){
            *min = vetor[i];
        }if(vetor[i] > *max){
            *max = vetor[i];
        }
    }
}

int main()
{
    int vetor[5];
    int min, max;

    printf("Digite 5 valores inteiros:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }

    Encontrar_Min_Max(vetor, 5, &max, &min);

    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);


 return 0;
}


// SEGUNDA ALTENATIVA

void Encontrar_Min_Max(int *V, int tamanho, int *min, int *max) {
    int *ptr = V;

    *min = *max = *ptr; // Inicializa com o primeiro valor

    for (ptr = V + 1; ptr < V + tamanho; ptr++) {
        if (*ptr < *min) {
            *min = *ptr;
        }
        if (*ptr > *max) {
            *max = *ptr;
        }
    }
}

int main() {

    int V[5];
    int min, max;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &V[i]);
    }

    Encontrar_Min_Max(V, 5, &min, &max);

    printf("Valor mínimo: %d\n", min);
    printf("Valor máximo: %d\n", max);

    return 0;
}

