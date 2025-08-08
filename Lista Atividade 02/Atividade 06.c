#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Ler as medidas dos lados de um triângulo. Verificar e escrever se ele é EQUILÁTERO,ISÓSCELES OU ESCALENO. */

int main()
{
    float a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if(a + b > c && a + c > b && b + c > a){
        if(a == b && b == c){
            printf("E Equilatero");
        }else if(a == b || a == c || b == c){
                printf("E Isoscele");
        }else{
            printf("E Escaleno");
        }
    }else {
        printf("Os valores nao formam um triangulo.\n");
    }

 return 0;
}

