#include <stdio.h>
#include <stdlib.h>

/* Considere um vetor de 10 n�meros inteiros positivos maiores que zero e um �nico n�mero X inteiro,
 tamb�m positivo e maior que zero. Fa�a um programa para:

(a) ler pelo teclado o vetor;
(b) ler pelo teclado o n�mero X;
(c) encontrar e imprimir o par de posi��es consecutivas cujas componentes possuem a maior dist�ncia entre elas;
(d) verificar se o vetor est� em ordem crescente, decrescente ou n�o ordenado;
(e) dizer quantos n�meros no vetor s�o maiores que X, menores que X e iguais a X */

int main()
{
    int vetor[10];
    int x;

    //A
    for(int i = 0; i < 10; i++){
        printf("Digite %d numeros do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    //B
    printf("Digite um numero para X: ");
    scanf("%d", &x);

    //C
    int max_distancia = 0;
    int distancia;
    int posicao = 0;

    for(int i = 0; i < 9; i++){
        if(vetor[i] >= vetor[i+1]){
            distancia = vetor[i] - vetor[i + 1];
        }else{
            distancia = vetor[i + 1] - vetor[i];
        }
        if(distancia > max_distancia){
            max_distancia = distancia;
            posicao = i;
        }
    }

    printf("\nMaior distancia entre elementos consecutivos: %d (posicoes %d e %d - valores %d e %d)\n", max_distancia, posicao, posicao + 1, vetor[posicao], vetor[posicao + 1]);

    //D
    int crescente = 1;
    int decrescente = 1;

    for(int i = 0; i < 9; i++){
        if(vetor[i] < vetor[i+1]){
            decrescente = 0;
        }else if(vetor[i] > vetor[i+1]){
            crescente = 0;
        }else{
            crescente = 0;
            decrescente = 0;
        }
    }

    if(crescente){
        printf("O vetor esta em ordem crescente.\n");
    }else if(decrescente){
        printf("O vetor esta em ordem decrescente.\n");
    }else{
        printf("O vetor nao esta ordenado.\n");
    }

    //E
    int maior = 0, menor = 0, igual = 0;
    for(int i = 0; i < 10; i++){
        if(vetor[i] > x){
            maior++;
        }else if(vetor[i] < x){
            menor++;
        }else{
            igual++;
        }
    }

    printf("Quantidade de numeros maiores que X: %d\n", maior);
    printf("Quantidade de numeros menores que X: %d\n", menor);
    printf("Quantidade de numeros iguais a X: %d\n", igual);

 return 0;
}


//COM FUN��ES

// (a) Fun��o para ler os 10 elementos do vetor
void lerVetor(int vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d� numero do vetor (maior que zero): ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

// (b) Fun��o para ler o valor de X
int lerX() {

    int x;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    return x;
}

// (c) Fun��o para encontrar o par de posi��es consecutivas com maior dist�ncia
void maiorDistanciaConsecutiva(int vetor[], int tamanho) {

    int max_distancia = 0;
    int distancia, posicao = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] >= vetor[i + 1]) {
            distancia = vetor[i] - vetor[i + 1];
        } else {
            distancia = vetor[i + 1] - vetor[i];
        }

        if (distancia > max_distancia) {
            max_distancia = distancia;
            posicao = i;
        }
    }

    printf("\nMaior distancia entre elementos consecutivos: %d\n", max_distancia);
    printf("Ocorre entre as posicoes %d e %d (valores %d e %d)\n",
           posicao, posicao + 1, vetor[posicao], vetor[posicao + 1]);
}

// (d) Fun��o para verificar a ordem do vetor
void verificarOrdem(int vetor[], int tamanho) {

    int crescente = 1;
    int decrescente = 1;

    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] < vetor[i + 1]) {
            decrescente = 0;
        } else if (vetor[i] > vetor[i + 1]) {
            crescente = 0;
        } else {
            crescente = 0;
            decrescente = 0;
        }
    }

    printf("\nOrdem do vetor: ");
    if (crescente) {
        printf("Crescente\n");
    } else if (decrescente) {
        printf("Decrescente\n");
    } else {
        printf("Nao ordenado\n");
    }
}

// (e) Fun��o para contar maiores, menores e iguais a X
void comparar_X(int vetor[], int tamanho, int x) {

    int maior = 0, menor = 0, igual = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > x) {
            maior++;
        } else if (vetor[i] < x) {
            menor++;
        } else {
            igual++;
        }
    }

    printf("\nCompara��o com X = %d:\n", x);
    printf("Maiores que X: %d\n", maior);
    printf("Menores que X: %d\n", menor);
    printf("Iguais a X: %d\n", igual);
}

// Fun��o principal
int main()
{
    int vetor[10];
    int tamanho = 10;

    lerVetor(vetor, tamanho);        // (a)

    int x = lerX();                  // (b)

    maiorDistanciaConsecutiva(vetor, tamanho); // (c)

    verificarOrdem(vetor, tamanho); // (d)

    comparar_X(vetor, tamanho, x); // (e)

    return 0;
}
