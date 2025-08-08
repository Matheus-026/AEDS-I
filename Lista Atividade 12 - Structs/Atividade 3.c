#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>

/* Crie uma struct chamada ponto2d que tenha como atributos os pontos x, y e z. Crie duas
estruturas do tipo ponto2d chamadas ponto_inicial e ponto_final. Faça um menu com
as seguintes opções e implemente-as:
    1 Digitar o valor do primeiro ponto
    2 Digitar os valores do segundo ponto
    3 Mostrar a distância entre os pontos
    4 Sair

DICA: Distância entre dois pontos (x1, y1)(x2, y2): raiz quadrada de (x1−x2)2+(y1−y2)2 */


typedef struct{
    double x;
    double y;
    double z;
}Pontod2;

double calcular_distancia(Pontod2 a, Pontod2 b){

    double d_x = a.x - b.x;
    double d_y = a.y - b.y;
    double d_z = a.z - b.z;

 return sqrt(d_x * d_x + d_y * d_y + d_z * d_z);
}

int menu(Pontod2 *ptr1, Pontod2 *ptr2){

    int opcao;

    do{
        printf("Menu:\n");
        printf("1 - Digitar os valores do primeiro ponto\n");
        printf("2 - Digitar os valores do segundo ponto\n");
        printf("3 - Mostrar a distancia entre os pontos\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: printf("Digite x, y e z do ponto inicial: ");
                    scanf("%lf %lf %lf", &ptr1->x, &ptr1->y, &ptr1->z);
                    break;
            case 2: printf("Digite x, y e z do ponto final: ");
                    scanf("%lf %lf %lf", &ptr2->x, &ptr2->y, &ptr2->z);
                    break;
            case 3: printf("A distancia dos pontos: %lf\n", calcular_distancia(*ptr1, *ptr2));
                    break;
            case 4: printf("\nFim do programa.\n");
                    break;
            default: printf("Opcao Invalida.\n");
        }
    }while(opcao != 4);
}

int main()
{
    Pontod2 ponto_inicial = {0, 0, 0};
    Pontod2 ponto_final = {0, 0, 0};

    menu(&ponto_inicial, &ponto_final);

 return 0;
}
