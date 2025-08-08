#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa em C que declare uma matriz de inteiros com 2 linhas e 3 colunas.
O programa deve solicitar que o usuário insira os valores inteiros para preencher a matriz.
Em seguida, o programa deve:
a) Mostrar a matriz original.
b) Criar uma matriz chamada matrizTransposta e exibir a matriz transposta (ou seja,
uma matriz 3 × 2).
c) Calcular e exibir a soma de todos os elementos da matriz. */

int const max_lin = 2;
int const max_col = 3;

void ler_matriz(int matriz[][max_col]){

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_matriz(int matriz[][max_col]){

    printf("\nMatriz original (%dx%d):\n", max_lin, max_col);
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void matriz_transposta(int matriz[][max_col], int transposta[max_col][max_lin]){

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            transposta[j][i] = matriz[i][j];
        }
    }
}

void exibir_transposta(int transposta[max_col][max_lin]) {

    printf("\nMatriz transposta (%dx%d):\n", max_col, max_lin);
    for(int i = 0; i < max_col; i++){
        for(int j = 0; j < max_lin; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
}

int soma_elementos(int matriz[max_lin][max_col]) {

    int soma = 0;
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            soma = soma + matriz[i][j];
        }
    }
 return soma;
}

int main()
{
    int matriz[max_lin][max_col];
    int transposta[max_col][max_lin];

    ler_matriz(matriz);

    exibir_matriz(matriz);

    matriz_transposta(matriz, transposta);

    exibir_transposta(transposta);

    printf("\nSoma de todos os elementos da matriz: %d\n", soma_elementos(matriz));

 return 0;
}

