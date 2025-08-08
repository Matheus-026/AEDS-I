#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
• (a) Permita ao usuário entrar com os dados de 5 alunos.
• (b) Encontre o aluno com maior nota da primeira prova.
• (c) Encontre o aluno com maior média geral.
• (d) Encontre o aluno com menor média geral.
• (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6
para aprovação. */

#define TAM 5

typedef struct{
    int matricula;
    char nome[30];
    int nota_1;
    int nota_2;
    int nota_3;
}Aluno;

void preencher_dados_alunos(Aluno ALUNOS[]){

    for(int i = 0; i < TAM; i++){
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", ALUNOS[i].nome);

        printf("Digite o numero da matriculo do aluno: ");
        scanf("%d", &ALUNOS[i].matricula);

        printf("Nota da primeira prova: ");
        scanf("%d", &ALUNOS[i].nota_1);

        printf("Nota da segunda prova: ");
        scanf("%d", &ALUNOS[i].nota_2);

        printf("Nota da terceira prova: ");
        scanf("%d", &ALUNOS[i].nota_3);

        getchar();
        printf("\n");
    }
}

void encontrar_maior(Aluno ALUNOS[]){

    int maior = 0;
    int maior_nota = ALUNOS[0].nota_1;

    for(int i = 0; i < TAM; i++){
        if(ALUNOS[i].nota_1 > maior_nota){
            maior_nota = ALUNOS[i].nota_1;
            maior = i;
        }
    }
    printf("Aluno com a maior nota da primeira prova e: %s\n.", ALUNOS[maior].nome);
}

void encontrar_maior_media(Aluno ALUNOS[]){

    int maior = 0;
    float maior_media = (ALUNOS[0].nota_1 + ALUNOS[0].nota_2 + ALUNOS[0].nota_3) / 3.0;

    for(int i = 1; i < TAM; i++){
        float media = (ALUNOS[i].nota_1 + ALUNOS[i].nota_2 + ALUNOS[i].nota_3) / 3.0;

            if(media > maior_media){
                maior_media = media;
                maior = i;
            }
    }
    printf("\nAluno com a maior media geral: %s\n", ALUNOS[maior].nome);
    printf("Media: %.2f\n", maior_media);
}

void encontrar_menor_media(Aluno ALUNOS[]){

    int menor = 0;
    float menor_media = (ALUNOS[0].nota_1 + ALUNOS[0].nota_2 + ALUNOS[0].nota_3) / 3.0;

    for(int i = 1; i < TAM; i++){
        float media = (ALUNOS[i].nota_1 + ALUNOS[i].nota_2 + ALUNOS[i].nota_3) / 3.0;

            if(media < menor_media){
                menor_media = media;
                menor = i;
            }
    }
    printf("\nAluno com a menor media geral: %s\n", ALUNOS[menor].nome);
    printf("Media: %.2f\n", menor_media);
}

void verificar_aprovacao(Aluno ALUNOS[]){

    for(int i = 0; i < TAM; i++){
        float media = (ALUNOS[i].nota_1 + ALUNOS[i].nota_2 + ALUNOS[i].nota_3) / 3.0;

        printf("\nAluno: %s\n", ALUNOS[i].nome);
        printf("Media: %.2f - ", media);

        if(media >= 6.0){
            printf("Aprovado\n");
        }else{
            printf("Reprovado\n");
        }
    }
}

int main()
{
    Aluno ALUNOS[TAM];

    preencher_dados_alunos(ALUNOS);

    encontrar_maior(ALUNOS);

    encontrar_maior_media(ALUNOS);

    encontrar_menor_media(ALUNOS);

    verificar_aprovacao(ALUNOS);

 return 0;
}
