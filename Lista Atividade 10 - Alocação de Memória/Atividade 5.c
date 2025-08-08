#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função redimensiona_array que utilize realloc para redimensionar di-
namicamente um array de inteiros. A função deve receber o ponteiro para o array, o
tamanho atual e o novo tamanho desejado, e deve retornar o ponteiro para o novo array
redimensionado. Teste a função no programa principal. */

int* redimensiona_array(int *array, int tamanho_atual, int novo_tamanho){

    int *novo_array = (int *) realloc(array, novo_tamanho * sizeof(int));

if(novo_tamanho > tamanho_atual){
        for(int i = tamanho_atual; i < novo_tamanho; i++){
            novo_array[i] = 0;
        }
    }
 return novo_array;
}

int main()
{
    int *array;
    int tamanho_atual = 3;
    int novo_tamanho;

    // Alocação inicial
    array = (int *) malloc(tamanho_atual * sizeof(int));

    // Preenche valores
    printf("Digite %d valores inteiros:\n", tamanho_atual);

    for(int i = 0; i < tamanho_atual; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Solicita novo tamanho
    printf("\nDigite o novo tamanho do array: ");
    scanf("%d", &novo_tamanho);

    // Redimensiona o array
    array = redimensiona_array(array, tamanho_atual, novo_tamanho);
    if(array == NULL){
        return 1;
    }

    // Preenche novos valores, se necessário
    if(novo_tamanho > tamanho_atual){
        printf("Digite os %d novos valores:\n", novo_tamanho - tamanho_atual);
        for(int i = tamanho_atual; i < novo_tamanho; i++){
            printf("Valor %d: ", i + 1);
            scanf("%d", &array[i]);
        }
    }

    // Exibe array final
    printf("\nArray final:\n");
    for(int i = 0; i < novo_tamanho; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
