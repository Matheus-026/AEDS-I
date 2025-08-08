#include <stdio.h>
#include <stdlib.h>

/* Faça um programa para ler uma mensagem do teclado e criptografá-la utilizando o ci-
framento de César. Nesse caso, cada caractere da mensagem deve ser substituído pelo
caractere cujo código ASCII é igual ao seu mais uma constante K (lida do teclado). */

int main() {

    int K;
    char c;

    printf("Digite o valor da constante K: ");
    scanf("%d", &K);
    getchar(); // limpa o '\n' do buffer

    printf("Digite a mensagem: ");

    while ((c = getchar()) != '\n') {
        putchar(c + K);
    }
    printf("\n");

    return 0;
}
