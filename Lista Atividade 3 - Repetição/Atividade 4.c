#include <stdio.h>
#include <stdlib.h>

/*Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das
numProva provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média
de cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ouigual a 80%.*/

int main()
{
    int numAlunos, numProvas;
    float mediaAluno, mediaTurma = 0, alunoAcima80 = 0;
    float notas, somanotas = 0;
    float percentual;

    printf("Digite o numero de alunos: ");
    scanf("%i", &numAlunos);
    printf("Digite o numero de provas: ");
    scanf("%i", &numProvas);

    /* Ler nota dos alunos */
    for(int i = 0; i < numAlunos; i++){
        printf("Digite a nota dos alunos:%i\n", i + 1);

    /* Ler nota de cada aluno */
    for(int j = 0; j < numProvas; j++){
        printf("Nota %i: ", j + 1);
        scanf("%f", &notas);
        somanotas = somanotas + notas;
    }

    mediaAluno = somanotas / numProvas;
    mediaTurma = mediaTurma + mediaAluno;

    if(mediaAluno >= 80.0){
        alunoAcima80++;
    }
    printf("Media do aluno %i: %.2f\n", i + 1, mediaAluno);

}
    // Calculando a média da turma
    mediaTurma = mediaTurma / numAlunos;
    printf("\n Media da turma: %.2f\n", mediaTurma);

    // Calculando o percentual de alunos com média >= 80
    percentual = (alunoAcima80 / numAlunos * 100);
    printf("Percentual de alunos com media >= 80%%: %.2f%%\n", percentual);

 return 0;
}
