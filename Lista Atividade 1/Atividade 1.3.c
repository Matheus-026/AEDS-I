#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia. */

int main()
{
    int hora, minuto, minutos_total;

    printf("Digite a hora: ");
    scanf("%i", &hora);
    printf("Digite o minutos: ");
    scanf("%i", &minuto);

    minutos_total = (hora * 60) + minuto;

    printf("Os minutos ao todo e:%i\n", minutos_total);

    return 0;
}
