#include <stdio.h>

/* Faça um programa que leia um caractere e se esse for uma letra maiúscula, imprima
“Maiúscula”. Senão, se ele for uma letra minúscula, imprima “Minúscula”. Senão, se for
um dígito, imprima dígito. Senão imprima “Outro caractere”. */

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

    if (isalpha(letra)) {       /* Se é uma letra */
        if (isupper(letra)) {   /* Se é letra maiúscula*/
            printf("Maiuscula\n");
        }
        else {
            printf("Minuscula\n");
        }
    }
    else if (isdigit(letra)) {  /* Se é um dígito */
        printf("Digito\n");
    }
    else {
        printf("Erro, informe uma letra.\n");
    }

    return 0;
}
