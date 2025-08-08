#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa para ler uma mensagem do teclado e criptograf�-la utilizando o ci-
framento de C�sar. Nesse caso, cada caractere da mensagem deve ser substitu�do pelo
caractere cujo c�digo ASCII � igual ao seu mais uma constante K (lida do teclado). */

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
