#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler dois valores reais. Calcular e escrever o quociente do primeiro pelo segundo se este
for diferente de zero. */

int main()
{
    float num1, num2, quociente;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    if(num2 != 0){
        quociente = num1 / num2;
        printf("O quociente de %.2f por %.2f e: %.2f\n", num1, num2, quociente);
    }else{
        printf("Erro\n");
    }

 return 0;
}
