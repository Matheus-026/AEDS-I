#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Ler um número natural e verificar se é ele primo ou não. Um número natural é primo
se é ele divisível apenas por um e por si próprio. Lembre-se que o conjunto dos números
naturais é composto pelos valores inteiros e positivos. Rejeitar a leitura de número inválido
(não pertencente ao conjunto de números naturais). Ao finalizar, permitir verificar um
novo número, até que um número igual a zero (flag) seja fornecido. Informar ao usuário
ser o valor zero aquele que encerrará o programa.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero, i, eh_primo;
    int encerrar = 0; // Flag para controlar o encerramento do programa

    printf("Informe que o valor zero encerrará o programa.\n");

    while(!encerrar){

        printf("Digite um número natural: ");
        scanf("%d", &numero);

        if(numero == 0){
            printf("Programa encerrado.\n");
            encerrar = 1;
        }else if(numero < 0){
            printf("Número inválido.\n");
        }else{
            eh_primo = 1;
            if(numero <= 1){
                eh_primo = 0;
            }else{
                for(i = 2; i * i <= numero; i++){
                    if(numero % i == 0){
                        eh_primo = 0;
                        i = numero;
                    }
                }
            }
            if(eh_primo){
                printf("%d é um número primo.\n", numero);
            } else {
                printf("%d não é um número primo.\n", numero);
            }
        }
    }
 return 0;
}
