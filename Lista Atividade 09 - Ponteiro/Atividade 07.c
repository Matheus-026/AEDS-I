#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que modifique as vogais de uma frase. O programa deve ler uma frase
(m�x. 100 caracteres) e armazen�-la num vetor. Imprima a frase lida trocando as vogais,
isto �, trocar �a� pelo �u�, �e� pelo �o�, �i� pelo �u�, �o� pelo �a� e o �u� pelo �e�. Usar uma
fun��o void (procedimento) para realizar a troca e uma fun��o para realizar a impress�o
da frase trocada. A fun��o deve ter como par�metro um ponteiro char referente ao vetor. */

void trocar_vogais(char frase[]){

    for(int i = 0; frase[i] != '\0'; i++){

        if(frase[i] == 'a'){
            frase[i] = 'u';
        }else if(frase[i] == 'e'){
            frase[i] = 'o';
        }else if(frase[i] == 'i'){
            frase[i] = 'u';
        }else if (frase[i] == 'o'){
            frase[i] = 'a';
        }else if (frase[i] == 'u'){
            frase[i] = 'e';
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[101];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    trocar_vogais(frase);

    printf("Frase modificada: %s\n", frase);

 return 0;
}
