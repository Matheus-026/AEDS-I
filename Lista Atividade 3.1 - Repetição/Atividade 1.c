#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que l� um valor N inteiro e positivo e que calcula e escreve o fatorial de N (N!)*/

 int main(){
    int num;
    int fatorial = 1;

    // Leitura e valida��o do valor de N
    do{
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &num);

        if(num < 0){
            printf("Valor inv�lido!.\n");
        }
    }while(num < 0);

    // C�lculo do fatorial
    for (int i = 1; i <= num; i++){
        fatorial = fatorial * i;
    }

    // Exibi��o do resultado
    printf("%i = %i\n", num, fatorial);

    return 0;
}

