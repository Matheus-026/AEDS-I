#include <stdio.h>

/* Fa�a um programa que leia um caractere e se esse for uma letra mai�scula, imprima
�Mai�scula�. Sen�o, se ele for uma letra min�scula, imprima �Min�scula�. Sen�o, se for
um d�gito, imprima d�gito. Sen�o imprima �Outro caractere�. */

int main(){

    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if(letra >= 'A' && letra <= 'Z'){
        printf("Maiuscula\n");
    }
    else if(letra >= 'a' && letra <= 'z'){
        printf("Minuscula\n");
    }
    else if(letra >= '0' && letra <= '9'){
        printf("Digito\n");
    }
    else{
        printf("Erro, informe uma letra.\n");
    }

 return 0;
}

/* Com ctype.h */

#include <ctype.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (isalpha(letra)) {       /* Se � uma letra */
        if (isupper(letra)) {   /* Se � letra mai�scula*/
            printf("Maiuscula\n");
        }
        else {
            printf("Minuscula\n");
        }
    }
    else if (isdigit(letra)) {  /* Se � um d�gito */
        printf("Digito\n");
    }
    else {
        printf("Erro, informe uma letra.\n");
    }

    return 0;
}
