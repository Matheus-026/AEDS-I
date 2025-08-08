#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/* Ler um caractere e a medida do raio de um c�rculo.

� Se o caractere lido for T, calcular e escrever a �rea do tri�ngulo inscrito.
� Se for Q, calcular e escrever a �rea do quadrado inscrito.
� Se for H, calcular e escrever a �rea do hex�gono inscrito.
� Se for outro caractere que n�o estes, escrever uma mensagem apropriada */

int main(){

    setlocale(LC_ALL, "Portuguese");

    char tipo;
    float raio, area;

    printf("Digite um caractere (T, Q ou H): ");
    scanf(" %c", &tipo);

    tipo = tolower(tipo);

    printf("Digite o valor do raio do c�rculo: ");
    scanf("%f", &raio);

    switch(tipo){
        case 't':
            area = (3 * sqrt(3) / 4) * raio * raio;
            printf("�rea do tri�ngulo inscrito: %.2f\n", area);
            break;

        case 'q':
            area = 2 * raio * raio;
            printf("�rea do quadrado inscrito: %.2f\n", area);
            break;

        case 'h':
            area = (3 * sqrt(3) / 2) * raio * raio;
            printf("�rea do hex�gono inscrito: %.2f\n", area);
            break;

        default:
            printf("Caractere inv�lido. Use T, Q ou H.\n");
            break;
    }

 return 0;
}
