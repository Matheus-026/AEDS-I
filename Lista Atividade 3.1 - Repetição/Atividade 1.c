#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o fatorial de N (N!)*/

 int main(){
    int num;
    int fatorial = 1;

    // Leitura e validação do valor de N
    do{
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &num);

        if(num < 0){
            printf("Valor inválido!.\n");
        }
    }while(num < 0);

    // Cálculo do fatorial
    for (int i = 1; i <= num; i++){
        fatorial = fatorial * i;
    }

    // Exibição do resultado
    printf("%i = %i\n", num, fatorial);

    return 0;
}

