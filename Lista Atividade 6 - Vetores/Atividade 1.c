#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor para armazenar 10 n�meros inteiros. Solicite que o usu�rio insira os valores
e, ap�s a leitura, escreva cada elemento do vetor e a sua respectiva posi��o no formato:
"Elemento [valor] na posi��o [�ndice]". */

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Insira %d digitos: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nSaida:\n");

    for(int i = 0; i < 10; i++){
        printf("Elemento %d na posi��o %d\n", vetor[i], i);
    }

 return 0;
}


/* Com FUN��O */

void exibirVetor(int v[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d na posi��o %d\n", v[i], i);
    }
}

int main(){

    int v[10];

    for(int i = 0; i < 10; i++){
        printf("Insira o %d� n�mero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nSa�da:\n");

    exibirVetor(v, 10);

    return 0;
}
