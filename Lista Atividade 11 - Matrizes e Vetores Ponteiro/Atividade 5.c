#include <stdio.h>
#include <stdlib.h>

/* Implemente uma função que recebe uma matriz quadrada (N x N) como ponteiro para o
primeiro elemento e sua ordem N, e transpõe a matriz (troca linhas por colunas) direta-
mente na memória, usando ponteiros. */

int const max_lin = 4;
int const max_col = 4;

void transpor(int *matriz, int n){

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int *elemento1 = matriz + i * n + j;
            int *elemento2 = matriz + j * n + i;

            int troca = *elemento1;
            *elemento1 = *elemento2;
            *elemento2 = troca;
        }
    }
}

void imprimir_matriz(int *matriz, int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", *(matriz + i * n + j));
        }
        printf("\n");
    }

}

int main()
{
    int n = 4;
    int matriz[max_lin][max_col];

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    printf("Matriz original:\n");
    imprimir_matriz(&matriz[0][0], n);

    transpor(&matriz[0][0], n);

    printf("\nMatriz transposta:\n");
    imprimir_matriz(&matriz[0][0], n);

 return 0;
}

