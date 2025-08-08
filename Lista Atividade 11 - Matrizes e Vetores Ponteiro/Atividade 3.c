#include <stdio.h>
#include <stdlib.h>

/* Desenvolva uma função que receba como parâmetro os ponteiros de dois vetores de 5
posições. O procedimento deverá imprimir na tela os valores contidos nos dois vetores de
forma crescente (Utilize ponteiros).Exemplo:
    Vetor 1 = 2, 5, 9, 8, 3
    Vetor 2 = 7, 4, 1, 10, 6
    Saída: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 */

void imprimir_ordenado(int *vetor1, int *vetor2){

    int combinar[10];

    for(int i = 0; i < 5; i++){
        *(combinar + i) = *(vetor1 + i);
        *(combinar + i + 5) = *(vetor2 + i);
    }

    // Ordenação com Bubble Sort
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 10; j++){
            if(*(combinar + i) > *(combinar + j)){
                int troca = *(combinar + i);
                *(combinar + i) = *(combinar + j);
                *(combinar + j) = troca;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d", *(combinar + i));
        if(i < 9){
            printf(", ");
        }
    }
    printf("\n");
}

int main()
{
    int vetor1[5] = {2, 5, 9, 8, 3};
    int vetor2[5] = {7, 4, 1, 10, 6};

    imprimir_ordenado(vetor1, vetor2);

 return 0;
}

