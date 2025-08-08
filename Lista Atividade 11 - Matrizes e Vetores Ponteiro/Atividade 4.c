#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que recebe uma matriz representada como um ponteiro para o pri-
meiro elemento, o número de linhas e colunas, e retorna o maior valor encontrado na
matriz. A matriz deve ser percorrida usando aritmética de ponteiros. */

int const max_lin = 4;
int const max_col = 4;

int maior_valor_matriz(int *matriz, int linha, int coluna){

    int maior = *matriz;
    int valor_atual;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            valor_atual = *(matriz + i * coluna + j);
            if(valor_atual > maior){
                maior = valor_atual;
            }
        }
    }
 return maior;
}

int main()
{
    int matriz[max_lin][max_col];

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Digite o valor da matriz[%d][%d]:\n", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    int maior = maior_valor_matriz(&matriz[0][0], max_lin, max_col);

    printf("O maior valor da matriz e: %d\n", maior);

 return 0;
}

