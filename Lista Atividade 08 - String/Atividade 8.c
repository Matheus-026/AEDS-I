#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Construa um programa que leia duas strings do teclado. Imprima uma mensagem infor-
mando quantas vezes a segunda string lida está contida dentro da primeira. */


int contar_ocorrencias(char *texto1, char *texto2){

    int count = 0;
    int str1 = 0, str2 = 0;

    // Calcula o tamanho das strings
    while (texto1[str1] != '\0') str1++;
    while (texto2[str2] != '\0') str2++;

    for(int i = 0; i <= str1 - str2; i++) {
        int j;
        for(j = 0; j < str2; j++) {
            if(texto1[i + j] != texto2[j]) {
                break;
            }
        }
        // Se encontrou toda a substring
        if(j == str2){
            count++;
        }
    }
 return count;
}

int main()
{

    char texto1[100];
    char texto2[100];

    printf("Digite uma palavra: ");
    scanf(" %[^\n]", texto1);

    printf("Digite outra palavra: ");
    scanf(" %[^\n]", texto2);

    int ocorrencias = contar_ocorrencias(texto1, texto2);

    printf("A segunda string aparece %d vez(es) dentro da primeira.\n", ocorrencias);

    return 0;
}
