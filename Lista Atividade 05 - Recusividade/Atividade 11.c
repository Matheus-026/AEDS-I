#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fazer um método recursivo que multiplique dois números naturais através de somas sucessivas */

int multiplicacao_com_soma(int a, int b){

    int resultado;
    if(b == 0){
        resultado = 0;
    }else{
        resultado = a +  multiplicacao_com_soma(a, b - 1);
    }
return resultado;
}

int main()
{
    int num1, num2;

    printf("Digite dois numero: ");
    scanf("%d %d", &num1, &num2);

    printf("%d x %d = %d\n", num1, num2, multiplicacao_com_soma(num1, num2));

 return 0;
}



