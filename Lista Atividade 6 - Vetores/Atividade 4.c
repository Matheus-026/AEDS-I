#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 10 n�meros inteiros. Solicite que o usu�rio insira os valores
e, em seguida, conte e escreva quantos n�meros pares existem no vetor. */

int main(){

    int v[10];
    int count = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite %d numeros: ", i + 1);
        scanf("%d", &v[i]);

        if(v[i]% 2 == 0){
            count++;
        }
    }
    printf("A quantidade de numeros pares: %d\n", count);

 return 0;
}




// COM FUN��O

void lerVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &v[i]);
    }
}

int contarPares(int v[], int tamanho){
    int count = 0;
    for(int i = 0; i < tamanho; i++){
        if(v[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){

    int v[10];
    int tamanho = 10;

    lerVetor(v, tamanho);

    int qt_pares = contarPares(v, tamanho);

    printf("A quantidade de n�meros pares: %d\n", qt_pares);

    return 0;
}

