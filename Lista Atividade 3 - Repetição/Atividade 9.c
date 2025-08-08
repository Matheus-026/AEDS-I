#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que calcule o n-ésimo elemento de uma progressão geométrica (PG) e
o imprima na tela. O usuário deve entrar com os valores da razão e do 1o termo da PG.
Lembre-se que uma PG é dada pela seguinte fórmula: an = a1 ∗ qn−1, onde an é o n-ésimo
elemento da PG, a1 é o 1o elemento da PG e q é a razão.

• Mostre o algoritmo pedido.
• Mostre o algoritmo pedido sem utilizar a operação de exponenciação.
• Mostre o algoritmo pedido sem utilizar as operações de exponenciação e multiplicação*/

int main()
{
 int a1, q, n;
 int an;

 printf("Digite o 1 termo da PG (a1): ");
 scanf("%i", &a1);

 printf("Digite a razao da PG (q): ");
 scanf("%i", &q);

 printf("Digite o valor de n: ");
 scanf("%i", &n);

 an = a1 * pow(q, n-1);

 printf("O %i-ésimo termo da PG é: %i\n", n, an);

 return 0;
}

/*2) Mostre o algoritmo pedido sem utilizar a operação de exponenciação.*/

int main() {

    int a1, q, n, an = 1;

    printf("Digite o 1o termo da PG (a1): ");
    scanf("%d", &a1);
    printf("Digite a razão da PG (q): ");
    scanf("%d", &q);
    printf("Digite o valor de n (posição desejada): ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        an = an * q;
    }
    an = a1 * an;

    printf("O %i-ésimo termo da PG é: %i\n", n, an);
    return 0;
}


/* 3) Versão sem exponenciação e sem multiplicação*/

int main() {

    int a1, q, n, an = a1;

    printf("Digite o 1o termo da PG (a1): ");
    scanf("%d", &a1);
    printf("Digite a razão da PG (q): ");
    scanf("%d", &q);
    printf("Digite o valor de n (posição desejada): ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        an = an + an * (q - 1);
    }

    printf("O %i-ésimo termo da PG é: %i\n", n, an);
    return 0;
}



