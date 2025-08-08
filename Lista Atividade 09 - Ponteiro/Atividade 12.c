#include <stdio.h>
#include <stdlib.h>

/* Elabore uma fun��o que receba duas strings como par�metros e verifique se a segunda
string ocorre dentro da primeira. Use aritm�tica de ponteiros para acessar os caracteres
das strings */

int strings(char *string1, char *string2){

    char *ptr1, *ptr2;
    char *inicio;

    while(*string1 != '\0'){
        if(*string1 == *string2){
        inicio = ptr1;
        ptr1 = string1;
        ptr2 = string2;

         while(*ptr1 != '\0' && *ptr2 != '\0' && *ptr1 == *ptr2){
            ptr1++;
            ptr2++;
        }
        if(*ptr2 == '\0'){
                return 1; // string2 foi encontrada dentro de string1
            }
            string1 = inicio + 1; // avan�a para o pr�ximo caractere
        } else {
            string1++;
        }
    }
 return 0; // string2 n�o foi encontrada
}

int main()
{
    char string1[100], string2[100];

    printf("Digite a string principal: ");
    scanf(" %[^\n]", string1);

    printf("Digite a substring: ");
    scanf(" %[^\n]", string2);

    if(strings(string1, string2)){
        printf("'%s' ocorre dentro de '%s'\n", string2, string1);
    }else{
        printf("'%s' NAO ocorre dentro de '%s'\n", string2, string1);
    }

 return 0;
}




