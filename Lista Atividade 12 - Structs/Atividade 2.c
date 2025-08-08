#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* Crie uma struct para controlar a��es de uma bolsa de valores com as seguintes informa��es:
� Nome da companhia
� �rea de atua��o da companhia
� Valor atual da a��o (em reais)
� Valor anterior
� Varia��o da a��o em porcentagem (double), ou seja, quanto a a��o cresceu ou caiu
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

        printf("Area de atua��o: ");
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
        printf("\nA��o %d:\n", i + 1);
        printf("Companhia: %s\n", ACOES[i].nome_companhia);
        printf("�rea de atua��o: %s\n", ACOES[i].area_atuacao);
        printf("Valor anterior: %.2f\n", ACOES[i].valor_anterior);
        printf("Valor atual: %.2f\n", ACOES[i].valor_atual);
        printf("Varia��o: %.2f%%\n", ACOES[i].variacao_percentual);
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
