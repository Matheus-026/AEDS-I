#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Ler um número inteiro.

• Se ele for 1 ou 2, ler as medidas dos lados de um retângulo, calcular e escrever a área
do círculo circunscrito a este retângulo.

• Se for 3 ou 4 ou 5, ler a medida do raio de um círculo. Calcular e escrever a área do
quadrado inscrito no mesmo.

• Se for outro número inteiro que não estes, ler a medida do lado de um quadrado,
calcular e escrever a área da coroa circular formada pelo círculo inscrito e circunscrito
a este quadrado.  */

#define PI 3.1416

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float a, b, raio, lado, area;

    printf("Digite um número inteiro: ");
    scanf("%d", &opcao);

    if(opcao == 1 || opcao == 2){
        // Retângulo: círculo circunscrito
        printf("Digite os dois lados do retângulo: ");
        scanf("%f %f", &a, &b);
        float diagonal = sqrt(a * a + b * b);
        float r = diagonal / 2;
        area = PI * r * r;
        printf("Área do círculo circunscrito: %.2f\n", area);

    }else if(opcao == 3 || opcao == 4 || opcao == 5){
        // Círculo: quadrado inscrito
        printf("Digite o raio do círculo: ");
        scanf("%f", &raio);
        area = 2 * raio * raio;
        printf("Área do quadrado inscrito: %.2f\n", area);

    }else{
        // Quadrado: coroa circular
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);
        area = (PI / 4) * lado * lado;
        printf("Área da coroa circular: %.2f\n", area);
    }

    return 0;
}
