#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Explique com suas palavras o que o programa abaixo est� produzindo. Mostre a matriz
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

    /* O programa apresenta diversos problemas estruturais e de l�gica. O primeiro erro � a tentativa de declarar uma fun��o main dentro de outra fun��o main, o que n�o � permitido em linguagem C.
     Fun��es devem ser declaradas de forma independente, fora do escopo de outras fun��es.
     Al�m disso, embora a matriz seja declarada com tr�s linhas e duas colunas, os la�os utilizados para preench�-la percorrem apenas parte dela, atribuindo valores apenas a duas posi��es.
     Isso resulta em uma matriz parcialmente preenchida, com a maioria de seus elementos contendo valores indefinidos, tamb�m conhecidos como lixo de mem�ria.
     Outro problema importante ocorre na fase de impress�o da matriz. Os �ndices utilizados para acessar os elementos est�o invertidos em rela��o � forma como foram preenchidos, o que pode levar ao acesso de posi��es que n�o foram previamente inicializadas.
     Isso compromete a confiabilidade da sa�da, pois pode exibir valores incorretos ou aleat�rios. */

 return 0;
}

