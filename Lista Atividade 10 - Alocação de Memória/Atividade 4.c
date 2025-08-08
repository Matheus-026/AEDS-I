#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa em C que use a função ‘calloc‘ para alocar memória para uma
matriz 3x3 de inteiros. Preencha a matriz com valores fornecidos pelo usuário, exiba-a na
tela e, por fim, libere a memória alocada */

const int max_lin = 3;
const int max_col = 3;

int main()
{
    int *matriz;

    matriz = (int*) calloc(max_lin * max_col, sizeof(int));

    printf("Digite os valores da matriz 3x3.\n");

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Elemento[%d][%d]: ", i,j);
            scanf("%d", &matriz[i * max_col + j]);
        }
    }

    printf("\nMatriz 3x3:\n");
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("%d\t", matriz[i * max_col + j]);
        }
        printf("\n");
    }

    free(matriz);

 return 0;
}
