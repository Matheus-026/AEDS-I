#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa em C que declare uma matriz de inteiros com 2 linhas e 3 colunas.
O programa deve solicitar que o usuário insira os valores inteiros para preencher a matriz.
Em seguida, o programa deve:

a) Mostrar a matriz original.

b) Criar uma matriz chamada matrizTransposta e exibir a matriz transposta (ou seja,
uma matriz 3 × 2).

c) Calcular e exibir a soma de todos os elementos da matriz. */

const int max_lin = 2;
const int max_col = 3;

void ler_matriz(int matriz[max_lin][max_col]){ // função para ler

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Digite os valores da matriz[%d][%d]: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_matriz(int matriz[][max_col], int linhas, int colunas){ // para exibir

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcular_transposta(int matriz[max_lin][max_col], int transposta[max_col][max_lin]){ // Calcular a transposta da matriz

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            transposta[j][i] = matriz[i][j];
        }
    }
}

void exibir_matriz_transposta(int transposta[max_col][max_lin]){

    for(int i = 0; i < max_col; i++) {
        for(int j = 0; j < max_lin; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
}

int somar(int matriz[max_lin][max_col]){

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

    printf("Matriz Original:\n");
    exibir_matriz(matriz, max_lin, max_col);

    calcular_transposta(matriz, transposta);

    printf("\nMatriz transposta:\n");
    exibir_matriz_transposta(transposta);

    int soma = somar(matriz);

    printf("\nSoma de todos os elementos da matriz: %d\n", soma);

 return 0;
}
