#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia o raio de um c�rculo e mostrar o seu per�metro e �rea. */

int main()
{
   float raio, perimetro, area;
   float pi = 3.14;


   printf("Digite o raio: ");
   scanf("%f", &raio);

   perimetro = 2 * pi * raio;
   area = pi * raio * raio;

   printf("Per�metro: %.2f\n", perimetro);
   printf("�rea: %.2f\n", area);

return 0;

}
