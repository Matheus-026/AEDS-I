#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler o valor do sal�rio m�nimo e o valor do sal�rio de uma pessoa, calcular e mostrar
quantos sal�rios m�nimos essa pessoa ganha. */

int main()
{
    float salario_min;
    float salario, salario_total;

    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o salario minimo: ");
    scanf("%f", &salario_min);

    salario_total = salario / salario_min;

    printf("A quantidade de salarios minimos que voce recebe e: %.2f", salario_total);

 return 0;
}
