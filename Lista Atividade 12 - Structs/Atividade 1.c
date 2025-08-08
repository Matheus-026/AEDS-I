#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Crie um programa que permita armazenar o nome, a altura e da data de nascimento
de até 10 pessoas. Cada pessoa deve ser representada por uma struct dentro de um
vetor. A data de nascimento também deve ser uma struct. O nome e a altura de cada
pessoa devem ser informados pelo teclado. A geração da data de nascimento deve ser
feita aleatoriamente através de uma função. */

#define TAM 10

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[50];
    int altura;
    Data dataNascimento;
}Pessoa;

Data gerar_data(){

    Data d;

    d.dia = rand() % 28 + 1;   // evita problemas com fevereiro
    d.mes = rand() % 12 + 1;
    d.ano = rand() % 30 + 1970; // anos entre 1970 e 1999, por exemplo

 return d;
}

void escrever_pessoas(Pessoa PESSOAS[]){

    for(int i = 0; i < TAM; i++){
        printf("Nome %d: ", i + 1);
        scanf(" %[^\n]", PESSOAS[i].nome);

        printf("Altura %d: ", i + 1);
        scanf("%d", &PESSOAS[i].altura);

        getchar();

        PESSOAS[i].dataNascimento = gerar_data();
    }
}

void exibir_pessoas(Pessoa PESSOAS[]){

    for(int i = 0; i < TAM; i++){
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s", PESSOAS[i].nome);
        printf("Altura: %d (cm)\n", PESSOAS[i].altura);
        printf("Data de nascimento: %02d/%02d/%d\n",
            PESSOAS[i].dataNascimento.dia,
            PESSOAS[i].dataNascimento.mes,
            PESSOAS[i].dataNascimento.ano);
    }

}

int main()
{
    srand(time(NULL));
    Pessoa PESSOAS[TAM];

    escrever_pessoas(PESSOAS);

    exibir_pessoas(PESSOAS);

 return 0;
}
