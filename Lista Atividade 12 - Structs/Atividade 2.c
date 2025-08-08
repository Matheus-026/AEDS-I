#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informações:
• Nome da companhia
• Área de atuação da companhia
• Valor atual da ação (em reais)
• Valor anterior
• Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu
desde a abertura da bolsa no dia. */

#define TAM 5

typedef struct{
    char nome_companhia[30];
    char area_atuacao[30];
    double valor_atual;
    double valor_anterior;
    double variacao_percentual;
}Acao;

double calcular_variacao(double atual, double anterior) {
    return ((atual - anterior) / anterior) * 100.0;
}

void cadastrar_acoes(Acao ACOES[]){

    for(int i = 0; i < TAM; i++){
        printf("Nome da companhia: ");
        scanf(" %[^\n]", ACOES[i].nome_companhia);

        printf("Area de atuação: ");
        scanf(" %[^\n]", ACOES[i].area_atuacao);

        printf("Valor atual: ");
        scanf("%lf", &ACOES[i].valor_atual);

        printf("Valor anterior: ");
        scanf("%lf", &ACOES[i].valor_anterior);

        getchar();

        ACOES[i].variacao_percentual = calcular_variacao(ACOES[i].valor_atual, ACOES[i].valor_anterior);

        printf("\n");
    }
}

void exibir_acoes(Acao ACOES[]){

    for(int i = 0; i < TAM; i++){
        printf("\nAção %d:\n", i + 1);
        printf("Companhia: %s\n", ACOES[i].nome_companhia);
        printf("Área de atuação: %s\n", ACOES[i].area_atuacao);
        printf("Valor anterior: %.2f\n", ACOES[i].valor_anterior);
        printf("Valor atual: %.2f\n", ACOES[i].valor_atual);
        printf("Variação: %.2f%%\n", ACOES[i].variacao_percentual);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Acao ACOES[TAM];

    cadastrar_acoes(ACOES);

    exibir_acoes(ACOES);

 return 0;
}
