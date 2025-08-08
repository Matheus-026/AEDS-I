#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <locale.h>

/* Considere uma matriz 10 × 10 preenchida com números inteiros aleatórios de 1 a 100.
Implemente uma função para cada item pedido abaixo:

• 1)Qual a coluna que contém a maior soma ?
• 2)Qual a linha que contém o valor da menor soma ?
• 3)Quantos primos menores do que 100 existem na matriz ?
• 4)Quantos múltiplos de um dado número existem na matriz ?
• 5)Quantos números na matriz são menores do que os seus 4 vizinhos diretos ? Note que os elementos das primeira e últimas linhas
  e primeira e última colunas não devem ser pesquisados, pois eles deixam de ter um ou mais vizinhos. */

const int max_lin = 10;
const int max_col = 10;

void PreencherMatriz(int matriz[][max_col]){

    srand(time(NULL));

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

int ColunaMaiorSoma(int matriz[][max_col]){

    int maior_soma = -1 ,coluna = 0;

    for(int j = 0; j < max_col; j++){
        int soma = 0;
        for(int i = 0; i < max_lin; i++){
            soma = soma + matriz[i][j];
        }
        if(soma > maior_soma){
            maior_soma = soma;
            coluna = j;
        }
    }
    return coluna;
}

int LinhaMenorSoma(int matriz[][max_col]){

    int menor_soma = max_col * 100 + 1, linha = 0;

    for(int i = 0; i < max_lin; i++){
        int soma = 0;
        for(int j = 0; j < max_col; j++){
            soma = soma + matriz[i][j];
        }
        if(soma < menor_soma){
            menor_soma = soma;
            linha = i;
        }
    }
 return linha;
}

int Primos(int n){

    if(n < 2){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int ContarPrimos(int matriz[][max_col]){

    int count = 0;

    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            if(Primos(matriz[i][j]))
                count++;
        }
    }
 return count;
}

int ContarMultiplos(int matriz[][max_col], int num){

    int count = 0;
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            if(matriz[i][j] % num == 0){
            count++;
            }
        }
    }
 return count;
}

int MenoresQueVizinhos(int matriz[][max_col]){

    int cont = 0;

    for(int i = 1; i < max_lin - 1; i++){
        for(int j = 1; j < max_col - 1; j++){
            int atual = matriz[i][j];
            if(atual < matriz[i-1][j] && atual < matriz[i+1][j] && atual < matriz[i][j-1] && atual < matriz[i][j+1]){
                cont++;
            }
        }
    }
 return cont;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[max_lin][max_col];
    int num;

    PreencherMatriz(matriz);

    printf("Matriz gerada:\n");
    for(int i = 0; i < max_lin; i++){
        for(int j = 0; j < max_col; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nColuna com maior soma: %d\n", ColunaMaiorSoma(matriz));

    printf("Linha com menor soma: %d\n", LinhaMenorSoma(matriz));

    printf("Quantidade de primos menores que 100: %d\n", ContarPrimos(matriz));

    printf("Digite um número para verificar múltiplos: ");
    scanf("%d", &num);

    printf("Quantidade de múltiplos de %d na matriz: %d\n", num, ContarMultiplos(matriz, num));

    printf("Quantidade de elementos menores que os 4 vizinhos diretos: %d\n", MenoresQueVizinhos(matriz));

 return 0;
}


