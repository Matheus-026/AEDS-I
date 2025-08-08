#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma fun��o void mostrarParesEmOrdemDecrescente(int n) que recebe um n�mero
inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
a sequ�ncia do exerc�cio anterior. A sua fun��o mostrarParesEmOrdemDecrescente deve
utilizar a fun��o par desenvolvida na quest�o anterior.*/

int par(int n){
    return 2 * n;
}

void mostrarParesEmOrdemDecrescente(int n){
    int i = (n - 1) / 2;
    while(i > 0){
        printf("%d ", par(i));
    i--;
    }
     printf("\n");
}

 int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("N�meros pares menores que %d em ordem decrescente:\n", n);
    mostrarParesEmOrdemDecrescente(n);

return 0;
}


