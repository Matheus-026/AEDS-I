#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Ler um n�mero inteiro.

� Se ele for 1 ou 2, ler as medidas dos lados de um ret�ngulo, calcular e escrever a �rea
do c�rculo circunscrito a este ret�ngulo.

� Se for 3 ou 4 ou 5, ler a medida do raio de um c�rculo. Calcular e escrever a �rea do
quadrado inscrito no mesmo.

� Se for outro n�mero inteiro que n�o estes, ler a medida do lado de um quadrado,
calcular e escrever a �rea da coroa circular formada pelo c�rculo inscrito e circunscrito
a este quadrado.  */

#define PI 3.1416

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float a, b, raio, lado, area;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &opcao);

    if(opcao == 1 || opcao == 2){
        // Ret�ngulo: c�rculo circunscrito
        printf("Digite os dois lados do ret�ngulo: ");
        scanf("%f %f", &a, &b);
        float diagonal = sqrt(a * a + b * b);
        float r = diagonal / 2;
        area = PI * r * r;
        printf("�rea do c�rculo circunscrito: %.2f\n", area);

    }else if(opcao == 3 || opcao == 4 || opcao == 5){
        // C�rculo: quadrado inscrito
        printf("Digite o raio do c�rculo: ");
        scanf("%f", &raio);
        area = 2 * raio * raio;
        printf("�rea do quadrado inscrito: %.2f\n", area);

    }else{
        // Quadrado: coroa circular
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);
        area = (PI / 4) * lado * lado;
        printf("�rea da coroa circular: %.2f\n", area);
    }

    return 0;
}
