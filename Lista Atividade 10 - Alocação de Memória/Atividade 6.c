#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa em C que aloque dinamicamente mem�ria para armazenar um
n�mero inteiro, um n�mero de ponto flutuante (�float�) e um caractere (�char�). Solicite
ao usu�rio que insira valores para essas vari�veis e exiba-os. Libere a mem�ria alocada
ao final do programa. */

int main() {

    int *p_int;
    float *p_float;
    char *p_char;

    p_int = (int *) malloc(sizeof(int));
    p_float = (float *) malloc(sizeof(float));
    p_char = (char *) malloc(sizeof(char));

    printf("Digite um n�mero inteiro: ");
    scanf("%d", p_int);

    printf("Digite um n�mero real: ");
    scanf("%f", p_float);

    printf("Digite um caractere: ");
    scanf(" %c", p_char);

    printf("\nValores digitados:\n");
    printf("Inteiro: %d\n", *p_int);
    printf("Float: %.2f\n", *p_float);
    printf("Caractere: %c\n", *p_char);

    free(p_int);
    free(p_float);
    free(p_char);

 return 0;
}
