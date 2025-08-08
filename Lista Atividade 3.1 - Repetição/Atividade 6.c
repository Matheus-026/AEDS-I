#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n, m;
    int soma_a = 0, soma_b = 0;

    // Solicita os valores de n e m ao usuário
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    if(n <= 0 || m <= 0){
        printf("Valores inválidos.\n");
        return 1;
    }

    // Calcula a soma (a)
    for(int i = 1; i <= n; i++){
        soma_a = soma_a + i;
    }

    // Calcula a soma (b):
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            soma_b += (i + j);
        }
    }

    printf("(a) Soma de 1 até %i: %i\n", n, soma_a);
    printf("(b) Soma dupla de 1 até %i e 1 até %i: %i\n", n, m, soma_b);

    return 0;
}
