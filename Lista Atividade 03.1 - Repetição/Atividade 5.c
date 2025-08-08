#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Ler um n�mero natural e verificar se � ele primo ou n�o. Um n�mero natural � primo
se � ele divis�vel apenas por um e por si pr�prio. Lembre-se que o conjunto dos n�meros
naturais � composto pelos valores inteiros e positivos. Rejeitar a leitura de n�mero inv�lido
(n�o pertencente ao conjunto de n�meros naturais). Ao finalizar, permitir verificar um
novo n�mero, at� que um n�mero igual a zero (flag) seja fornecido. Informar ao usu�rio
ser o valor zero aquele que encerrar� o programa.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero, i, eh_primo;
    int encerrar = 0; // Flag para controlar o encerramento do programa

    printf("Informe que o valor zero encerrar� o programa.\n");

    while(!encerrar){

        printf("Digite um n�mero natural: ");
        scanf("%d", &numero);

        if(numero == 0){
            printf("Programa encerrado.\n");
            encerrar = 1;
        }else if(numero < 0){
            printf("N�mero inv�lido.\n");
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
                printf("%d � um n�mero primo.\n", numero);
            } else {
                printf("%d n�o � um n�mero primo.\n", numero);
            }
        }
    }
 return 0;
}
