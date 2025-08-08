#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um al-
goritmo que leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma
residência, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser
pago; e o novo valor a ser pago por essa residência com um desconto de 10% */

int main()
{
    float kw, salario_min;
    float valor_kw, valor_pagar, valor_desc;

    printf("Digite o salario minimo: ");
    scanf("%f",&salario_min);
    printf("Digite a quantidade de killowatt: ");
    scanf("%f",&kw);

    valor_kw = (salario_min / 7) / 100;
    valor_pagar = kw * valor_kw;
    valor_desc = valor_pagar * 0.9;

    printf("Valor de cada kilowatt: %.2f\n", valor_kw);
    printf("Valor a ser pago: %.2f\n", valor_pagar);
    printf("Valor com desconto de 10%%: %.2f\n", valor_desc);

    return 0;
}


