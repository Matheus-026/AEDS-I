#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Explique com suas palavras o que o programa abaixo está produzindo. Mostre a matriz
resultante. */

int main()
{
    int mat[3][2];

    void main(){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 1; j++){
                mat[i][j] = i + j;
            }
        }
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 1; j++){
                printf("%i", mat[j][i]);
                printf("\n");
            }
        }
    }

    /* O programa apresenta diversos problemas estruturais e de lógica. O primeiro erro é a tentativa de declarar uma função main dentro de outra função main, o que não é permitido em linguagem C.
     Funções devem ser declaradas de forma independente, fora do escopo de outras funções.
     Além disso, embora a matriz seja declarada com três linhas e duas colunas, os laços utilizados para preenchê-la percorrem apenas parte dela, atribuindo valores apenas a duas posições.
     Isso resulta em uma matriz parcialmente preenchida, com a maioria de seus elementos contendo valores indefinidos, também conhecidos como lixo de memória.
     Outro problema importante ocorre na fase de impressão da matriz. Os índices utilizados para acessar os elementos estão invertidos em relação à forma como foram preenchidos, o que pode levar ao acesso de posições que não foram previamente inicializadas.
     Isso compromete a confiabilidade da saída, pois pode exibir valores incorretos ou aleatórios. */

 return 0;
}

