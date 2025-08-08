#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* uma empresa deseja aprimorar sua política de salários. Para isso, deseja saber:
(a) o percentual de funcionários com salário igual ao salário mínimo;
(b) a amplitude salarial (diferença entre o maior e o menor salário da empresa).
O valor do salário mínimo também deverá ser um valor lido. Considere que a empresa
tenha n funcionários, sendo n também um valor lido. Rejeitar a leitura de valores inváli-
dos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int n, i;
    float salario_minimo, salario, maior_salario = -1, menor_salario = -1;
    int count_salario_minimo = 0;
    int valido;

    // Solicita o número de funcionários
    printf("Digite o número de funcionários: ");
    scanf("%d", &n);

    // Verifica se o número de funcionários é válido
    if(n <= 0){
        printf("Número de funcionários inválido.\n");
        return 1;
    }

    // Solicita o valor do salário mínimo
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    // Verifica se o salário mínimo é válido
    if(salario_minimo <= 0){
        printf("Salário mínimo inválido.\n");
        return 1;
    }

    // Loop para ler os salários dos funcionários
    for(i = 0; i < n; i++){
        valido = 0; // Assume que o salário é inválido inicialmente
        while(!valido){
            printf("Digite o salário do funcionário %d: ", i + 1);
            scanf("%f", &salario);

            // Verifica se o salário é válido (positivo)
            if(salario > 0){
                valido = 1;
            }else{
                printf("Salário inválido. Digite um valor positivo.\n");
            }
        }

        // Atualiza o maior e o menor salário
        if (maior_salario == -1 || salario > maior_salario) {
            maior_salario = salario;
        }
        if (menor_salario == -1 || salario < menor_salario) {
            menor_salario = salario;
        }

        // Conta quantos funcionários têm salário igual ao salário mínimo
        if (salario == salario_minimo) {
            count_salario_minimo++;
        }
    }

    // Calcula o percentual de funcionários com salário igual ao salário mínimo
    float percentual_salario_minimo = (float)count_salario_minimo / n * 100;

    // Calcula a amplitude salarial
    float amplitude_salarial = maior_salario - menor_salario;

    // Exibe os resultados
    printf("\nPercentual de funcionários com salário igual ao salário mínimo: %.2f%%\n", percentual_salario_minimo);
    printf("Amplitude salarial: %.2f\n", amplitude_salarial);

    return 0;
}

