#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* uma empresa deseja aprimorar sua pol�tica de sal�rios. Para isso, deseja saber:
(a) o percentual de funcion�rios com sal�rio igual ao sal�rio m�nimo;
(b) a amplitude salarial (diferen�a entre o maior e o menor sal�rio da empresa).
O valor do sal�rio m�nimo tamb�m dever� ser um valor lido. Considere que a empresa
tenha n funcion�rios, sendo n tamb�m um valor lido. Rejeitar a leitura de valores inv�li-
dos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int n, i;
    float salario_minimo, salario, maior_salario = -1, menor_salario = -1;
    int count_salario_minimo = 0;
    int valido;

    // Solicita o n�mero de funcion�rios
    printf("Digite o n�mero de funcion�rios: ");
    scanf("%d", &n);

    // Verifica se o n�mero de funcion�rios � v�lido
    if(n <= 0){
        printf("N�mero de funcion�rios inv�lido.\n");
        return 1;
    }

    // Solicita o valor do sal�rio m�nimo
    printf("Digite o valor do sal�rio m�nimo: ");
    scanf("%f", &salario_minimo);

    // Verifica se o sal�rio m�nimo � v�lido
    if(salario_minimo <= 0){
        printf("Sal�rio m�nimo inv�lido.\n");
        return 1;
    }

    // Loop para ler os sal�rios dos funcion�rios
    for(i = 0; i < n; i++){
        valido = 0; // Assume que o sal�rio � inv�lido inicialmente
        while(!valido){
            printf("Digite o sal�rio do funcion�rio %d: ", i + 1);
            scanf("%f", &salario);

            // Verifica se o sal�rio � v�lido (positivo)
            if(salario > 0){
                valido = 1;
            }else{
                printf("Sal�rio inv�lido. Digite um valor positivo.\n");
            }
        }

        // Atualiza o maior e o menor sal�rio
        if (maior_salario == -1 || salario > maior_salario) {
            maior_salario = salario;
        }
        if (menor_salario == -1 || salario < menor_salario) {
            menor_salario = salario;
        }

        // Conta quantos funcion�rios t�m sal�rio igual ao sal�rio m�nimo
        if (salario == salario_minimo) {
            count_salario_minimo++;
        }
    }

    // Calcula o percentual de funcion�rios com sal�rio igual ao sal�rio m�nimo
    float percentual_salario_minimo = (float)count_salario_minimo / n * 100;

    // Calcula a amplitude salarial
    float amplitude_salarial = maior_salario - menor_salario;

    // Exibe os resultados
    printf("\nPercentual de funcion�rios com sal�rio igual ao sal�rio m�nimo: %.2f%%\n", percentual_salario_minimo);
    printf("Amplitude salarial: %.2f\n", amplitude_salarial);

    return 0;
}

