#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Construa um programa que leia duas strings do teclado. Imprima uma mensagem infor-
mando se a segunda string lida está contida dentro da primeira. */

int contida(char string1[], char string2[]) {

    int tamanho1 = 0, tamanho2 = 0;

    while(string1[tamanho1] != '\0'){
        tamanho1++;
    }
    while(string2[tamanho2] != '\0'){
        tamanho2++;
    }

    if(tamanho2 > tamanho1){
        return 0;
    }

    for(int i = 0; i <= tamanho1 - tamanho2; i++){
        int j = i, k = 0;
        while(string2[k] != '\0' && string1[j] == string2[k]){
            j++;
            k++;
        }
        if(string2[k] == '\0'){
            return 1;  // Encontrou
        }
    }

    return 0;
}

int main()
{
    char texto1[100];
    char texto2[100];

    printf("Digite uma palavra: ");
    scanf(" %[^\n]", texto1);

    printf("Digite outra palavra: ");
    scanf(" %[^\n]", texto2);

    if(contida(texto1, texto2)){
        printf("A segunda string esta contida na primeira.\n");
    }else{
        printf("A segunda string NÃO esta contida na primeira.\n");
    }

    return 0;
}
