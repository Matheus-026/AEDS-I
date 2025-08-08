#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número
inteiro n e mostra na tela (em ordem decrescente) todos os valores menores que n para
a sequência do exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve
utilizar a função par desenvolvida na questão anterior.*/

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

    printf("Números pares menores que %d em ordem decrescente:\n", n);
    mostrarParesEmOrdemDecrescente(n);

return 0;
}


