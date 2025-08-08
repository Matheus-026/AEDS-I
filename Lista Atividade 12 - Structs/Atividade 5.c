#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

/* Na quest�o anterior crie uma fun��o que pe�a o nome de uma banda ao usu�rio e diga se
ela est� entre suas bandas favoritas ou n�o. */

#define TAM 5

typedef struct{
    char nome[30];
    char estilo[30];
    int num_integrantes;
    int posicao_ranking;
}Banda;

void verificar_banda_favorita(Banda BANDAS[]){

    char nome_busca[30];
    int encontrar = 0; // VARIAVEL DE CONTROLE PARA VERIFICAR SE ESTA CORRETO OU N�O

    printf("\nDigite o nome da banda que deseja buscar: ");
    scanf(" %[^\n]", nome_busca);

    for(int i = 0; i < TAM; i++){
        if(strcmp(nome_busca, BANDAS[i].nome) == 0){ // AQUI USAMOS A STRING DE COMPARA��O
            printf("\nA banda %s esta entre suas favoritas na posicao %d do ranking.\n", BANDAS[i].nome, BANDAS[i].posicao_ranking);
            encontrar = 1;
        }
    }
    if(!encontrar){
        printf("\nA banda %s n�o esta entre suas favoritas.\n", nome_busca);
    }
}

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
        printf("\n");
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

    verificar_banda_favorita(BANDAS);

 return 0;
}
