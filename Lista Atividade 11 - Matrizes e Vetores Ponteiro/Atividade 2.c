#include <stdio.h>
#include <stdlib.h>

/* Uma agência de publicidade pediu à agência de modelos Luz & Beleza para encontrar
um ator que tenha idade entre 18 e 20 anos para participar de uma campanha publi-
citária. Foram inscritas 20 candidatos e, ao se inscreverem, forneceram nome e idade.
Tais informações foram armazenadas em 2 vetores distintos. O funcionário responsável
pelas inscrições se distraiu e inscreveu um candidato fora dos limites de idade. Faça um
programa para retirar do vetor de nomes o candidato que não está nas especificações da
agência. Imprima o vetor que contém os nomes dos candidatos aptas a concorrer a uma
vaga para a campanha */

#define TAM 20
#define MAX_NOME 100

int main()
{

char nomes[TAM][MAX_NOME];

    int idades[TAM];
    int total = 0;

    for(int i = 0; i < TAM; i++){

        char nome_temp[MAX_NOME];
        int idade_temp;

        printf("Digite o nome do candidato %d: ", i + 1);
        scanf(" %[^\n]", nome_temp);

        printf("Digite a idade de %s: ", nome_temp);
        scanf("%d", &idade_temp);

        if(idade_temp >= 18 && idade_temp <= 20){
            int copiar = 0;
            while(nome_temp[copiar] != '\0'){
                nomes[total][copiar] = nome_temp[copiar];
                copiar++;
            }
            nomes[total][copiar] = '\0'; // finaliza a string

            idades[total] = idade_temp;
            total++;
        }
    }

    printf("\nCandidatos aptos:\n");
    for(int i = 0; i < total; i++){
        printf("%s\n", nomes[i]);
    }

    return 0;
}
