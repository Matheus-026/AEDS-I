#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Implemente uma função que identifique o maior valor presente na linha i de uma matriz
de reais, sendo i também um argumento da função.

• Argumentos: o endereço da matriz de reais e um valor inteiro relativo à linha chave
da pesquisa

• Valor gerado: um valor real correspondente ao maior valor encontrado na linha */

const int max_lin = 2;
const int max_col = 4;

void LerMatriz(int matriz[][max_col]){

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("Digite os valores da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void ExibirMatriz(int matriz[][max_col]){

    printf("\nMatriz completa:\n");

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int MaiorValorLinha(int matriz[][max_col], int i){ // O i é a linha

    if(i < 0 || i >= max_lin){
        return -1;
    }

    int maior = matriz[i][0];

    for(int j = 1; j < max_col; j++){
        if(matriz[i][j] > maior){
            maior = matriz[i][j];
        }
    }
 return maior;
}

int main()
{
    int matriz[max_lin][max_col];
    int linha;

    LerMatriz(matriz);
    ExibirMatriz(matriz);

    printf("\nDigite o numero da linha (0 a %d): ", max_lin - 1);
    scanf("%d", &linha);

    int maior = MaiorValorLinha(matriz, linha); // LEMBRANDO QUE LINHA E 'I' NA FUNÇÃO

    if(maior != -1){
        printf("\nMaior valor da linha %d: %d\n", linha, maior);
    }else{
        printf("Linha invalida. Deve ser entre 0 e %d.\n", max_lin - 1);
    }


 return 0;
}
