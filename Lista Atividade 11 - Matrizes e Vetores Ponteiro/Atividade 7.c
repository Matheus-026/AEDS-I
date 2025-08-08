#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* a) Escreva um programa principal em C que crie e armazene uma matriz quadrada de
tamanho n � n, onde n deve ser lido do teclado e fornecido pelo usu�rio.

b) Chame uma fun��o preencheMatriz que preencha a matriz criada no programa prin-
cipal com valores aleat�rios entre 1 e 100.

c) Chame um procedimento somaDiagonalPrincipal que calcule e exiba a soma dos
elementos da diagonal principal da matriz. Esse procedimento deve receber uma c�pia
da matriz. Note que essa abordagem n�o � eficiente em termos de mem�ria, mas ser�
utilizada para fins did�ticos.

d) Chame um procedimento somaAbaixoDiagonal que calcule e exiba a soma dos elemen-
tos abaixo da diagonal principal da matriz. Esse procedimento deve receber o ponteiro
que aponta para a matriz e o tamanho da matriz, tornando-o mais eficiente, pois
economiza mem�ria ao evitar a cria��o de uma c�pia desnecess�ria da matriz.

e) Implemente as fun��es e procedimentos utilizados no programa principal:
� preencheMatriz
� somaDiagonalPrincipal
� somaAbaixoDiagonal */


void preencheMatriz(int n, int matriz[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

// Procedimento que recebe uma c�pia da matriz e soma a diagonal principal
void somaDiagonalPrincipal(int n, int matriz[n][n]){

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma = soma + matriz[i][i];
    }
    printf("\nSoma da diagonal principal: %d\n", soma);
}

// Procedimento que recebe ponteiro para matriz e soma os elementos abaixo da diagonal principal
void somaAbaixoDiagonal(int *matriz, int n) {

    int soma = 0;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            soma = soma + *(matriz + i * n + j);
        }
    }
    printf("\nSoma dos elementos abaixo da diagonal principal: %d\n", soma);
}

// Fun��o para exibir a matriz
void exibirMatriz(int n, int matriz[n][n]) {

    printf("\nMatriz:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    srand(time(NULL));

    // Leitura da ordem da matriz
    printf("Digite a ordem da matriz quadrada(n x n): ");
    scanf("%d", &n);

    int matriz[n][n];

    preencheMatriz(n, matriz);

    exibirMatriz(n, matriz);

    somaDiagonalPrincipal(n, matriz);

    somaAbaixoDiagonal(&matriz[0][0], n);

    return 0;
}
