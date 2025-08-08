#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Implemente uma função que identifique o maior valor presente na linha i de uma matriz
de reais, sendo i também um argumento da função.

• Argumentos: o endereço da matriz de reais e um valor inteiro relativo à linha chave
da pesquisa

• Valor gerado: um valor real correspondente ao maior valor encontrado na linha */

const int max_lin = 4;
const int max_col = 4;

void LerMatriz(float matriz[][max_col]){

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\n");
}

float diferenca_maiores_valores_diagonal(float matriz[][max_col]){

    float maior_acima = matriz[0][1];
    float maior_abaixo = matriz[1][0];

    for(int i = 0; i < max_lin; i++){
        for(int j = i + 1; j < max_col; j++){
            if(matriz[i][j] > maior_acima){
                maior_acima = matriz[i][j];
            }
        }
    }

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < i; j++){
            if(matriz[i][j] > maior_abaixo){
                maior_abaixo = matriz[i][j];
            }
        }
    }
 return maior_acima - maior_abaixo;
}

int main()
{
    float matriz[max_lin][max_col];

    LerMatriz(matriz);

    float diferenca = diferenca_maiores_valores_diagonal(matriz);
    printf("Diferenca entre os maiores valores acima e abaixo da diagonal principal: %.2f\n", diferenca);

 return 0;
}

