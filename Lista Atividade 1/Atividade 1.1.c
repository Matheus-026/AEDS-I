#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia o raio de um círculo e mostrar o seu perímetro e área. */

int main()
{
   float raio, perimetro, area;
   float pi = 3.14;


   printf("Digite o raio: ");
   scanf("%f", &raio);

   perimetro = 2 * pi * raio;
   area = pi * raio * raio;

   printf("Perímetro: %.2f\n", perimetro);
   printf("Área: %.2f\n", area);

return 0;

}
