#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* Defina uma estrutura que ir� representar bandas de m�sica. Essa estrutura deve ter o
nome da banda, que tipo de m�sica ela toca, o n�mero de integrantes e em que posi��o
do ranking essa banda est� dentre as suas 5 bandas favoritas. Crie um looping para
preencher as 5 estruturas de bandas criadas no exemplo passado. Ap�s criar e preencher,
exiba todas as informa��es das bandas/estruturas. */

#define TAM 5

typedef struct{
    char nome[30];
    char estilo[30];
    int num_integrantes;
    int posicao_ranking;
}Banda;

void preencher_bandas(Banda BANDAS[]){

    for(int i = 0; i < TAM; i++){
        printf("Nome da banda: ");
        scanf(" %[^\n]", BANDAS[i].nome);

        printf("Estilo de musica: ");
        scanf(" %[^\n]", BANDAS[i].estilo);

        printf("N�mero de integrantes: ");
        scanf("%d", &BANDAS[i].num_integrantes);

        printf("Posicao no ranking (1 a 5): ");
        scanf("%d", &BANDAS[i].posicao_ranking);

        getchar();
    }
}

void exibir_bandas(Banda BANDAS[]){

    for(int i = 0; i < TAM; i++){
        printf("\n--- Suas Bandas Favoritas ---\n");
        printf("\nBanda %d:\n", i + 1);
        printf("Nome: %s\n", BANDAS[i].nome);
        printf("Estilo: %s\n", BANDAS[i].estilo);
        printf("Integrantes: %d\n", BANDAS[i].num_integrantes);
        printf("Ranking: %d� lugar\n", BANDAS[i].posicao_ranking);
    }
}

int main()
{
    Banda BANDAS[TAM];

    preencher_bandas(BANDAS);

    exibir_bandas(BANDAS);

 return 0;
}
