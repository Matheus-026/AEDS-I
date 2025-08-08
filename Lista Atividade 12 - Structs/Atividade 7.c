#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data
de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até
30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na
estrutura e exibidos na tela. */

#define TAM 3

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[30];
    int idade;
    char sexo[10];
    char cpf[12];
    Data dataNascimento;
    int codigo_setor;
    char cargo[30];
    int salario;
}Funcionario;

void preencher_dados_funcionarios(Funcionario FUNCIONARIOS[]){

    for(int i = 0; i < TAM; i++){
        printf("Nome do funcionario: ");
        scanf(" %[^\n]", FUNCIONARIOS[i].nome);

        printf("Idade: ");
        scanf("%d", &FUNCIONARIOS[i].idade);

        printf("Sexo (M ou F): ");
        scanf(" %[^\n]", FUNCIONARIOS[i].sexo);

        printf("Digite o CPF do funcionario: ");
        scanf(" %[^\n]", FUNCIONARIOS[i].cpf);

        printf("Digite a data de nascimento do funcionario: ");
        scanf("%d %d %d", &FUNCIONARIOS[i].dataNascimento.dia,
                          &FUNCIONARIOS[i].dataNascimento.mes,
                          &FUNCIONARIOS[i].dataNascimento.ano);

        printf("Digite o codigo do setor do funcionario (0-99): ");
        scanf("%d", &FUNCIONARIOS[i].codigo_setor);

        printf("Digite o cargo do funcionario: ");
        scanf(" %[^\n]", FUNCIONARIOS[i].cargo);

        printf("Digite o salario do funcionario: ");
        scanf("%d", &FUNCIONARIOS[i].salario);

        getchar();
        printf("\n");
    }
}

void exibir_dados_funcionarios(Funcionario FUNCIONARIOS[]){

    for(int i = 0; i < TAM; i++){
        printf("\n--- Funcionário %d ---\n", i + 1);
        printf("Nome: %s\n", FUNCIONARIOS[i].nome);
        printf("Idade: %d\n", FUNCIONARIOS[i].idade);
        printf("Sexo: %s\n", FUNCIONARIOS[i].sexo);
        printf("CPF: %s\n", FUNCIONARIOS[i].cpf);
        printf("Data de Nascimento: %02d/%02d/%04d\n",FUNCIONARIOS[i].dataNascimento.dia,
                                                      FUNCIONARIOS[i].dataNascimento.mes,
                                                      FUNCIONARIOS[i].dataNascimento.ano);
        printf("Código do Setor: %d\n", FUNCIONARIOS[i].codigo_setor);
        printf("Cargo: %s\n", FUNCIONARIOS[i].cargo);
        printf("Salário: %d\n", FUNCIONARIOS[i].salario);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Funcionario FUNCIONARIOS[TAM];

    preencher_dados_funcionarios(FUNCIONARIOS);
    exibir_dados_funcionarios(FUNCIONARIOS);

 return 0;
}
