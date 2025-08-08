#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/* Ler um caractere e a medida do raio de um círculo.

• Se o caractere lido for T, calcular e escrever a área do triângulo inscrito.
• Se for Q, calcular e escrever a área do quadrado inscrito.
• Se for H, calcular e escrever a área do hexágono inscrito.
• Se for outro caractere que não estes, escrever uma mensagem apropriada */

int main(){

    setlocale(LC_ALL, "Portuguese");

    char tipo;
    float raio, area;

    printf("Digite um caractere (T, Q ou H): ");
    scanf(" %c", &tipo);

    tipo = tolower(tipo);

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    switch(tipo){
        case 't':
            area = (3 * sqrt(3) / 4) * raio * raio;
            printf("Área do triângulo inscrito: %.2f\n", area);
            break;

        case 'q':
            area = 2 * raio * raio;
            printf("Área do quadrado inscrito: %.2f\n", area);
            break;

        case 'h':
            area = (3 * sqrt(3) / 2) * raio * raio;
            printf("Área do hexágono inscrito: %.2f\n", area);
            break;

        default:
            printf("Caractere inválido. Use T, Q ou H.\n");
            break;
    }

 return 0;
}
