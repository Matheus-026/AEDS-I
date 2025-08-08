#include <stdio.h>
#include <stdlib.h>

/*Leia um número inteiro I e um número real R. Enquanto I maior que 10, imprima o
valor de I na tela, decremente o valor de I em duas unidades e enquanto R menor que 10,
imprima os valores de R e I na tela e incremente o valor de R em uma unidade.)*/

int main(){
    int I;
    float R;

    // Leitura dos valores
    printf("Digite um numero inteiro I: ");
    scanf("%i", &I);
    printf("Digite um numero real R: ");
    scanf("%f", &R);

    // Enquanto I for maior que 10, imprima o valor de I e decremente em 2
    while(I > 10){
        printf("%d\n", I);
        I = I - 2;
    }
    // Enquanto R for menor que 10, imprima os valores de R e I e incremente R
    while (R < 10){
        printf("%.2f %.2f\n", R, I);
        R = R + 1;
    }
 return 0;
}


