#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o
nome da banda, que tipo de música ela toca, o número de integrantes e em que posição
do ranking essa banda está dentre as suas 5 bandas favoritas. Crie um looping para
preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher,
exiba todas as informações das bandas/estruturas. */

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

        printf("Número de integrantes: ");
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
        printf("Ranking: %dº lugar\n", BANDAS[i].posicao_ranking);
    }
}

int main()
{
    Banda BANDAS[TAM];

    preencher_bandas(BANDAS);

    exibir_bandas(BANDAS);

 return 0;
}
