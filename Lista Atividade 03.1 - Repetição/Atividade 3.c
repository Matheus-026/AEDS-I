#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma empresa deseja reestruturar sua política de preços. Para atendê-la, construa um
programa que leia o preço de um conjunto de n mercadorias, sendo n também um valor
lido. O programa deverá calcular e escrever o maior preço dentre as mercadorias abaixo
de dois mil reais e o maior preço dentre aquelas a partir de dois mil reais. Rejeitar a
leitura de valores inválidos. */

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, i, valido;
    float preco, maior_abaixo_2000 = -1, maior_acima_2000 = -1;

    // Solicita o número de mercadorias
    printf("Digite o número de mercadorias: ");
    scanf("%i", &num);

    // Verifica se o número de mercadorias é válido
    if (num <= 0) {
        printf("Número de mercadorias inválido.\n");
    }else{
        for(i = 0; i < num; i++){
            valido = 0;
            while(!valido){
                printf("Digite o preço da mercadoria %i: ", i + 1);
                scanf("%f", &preco);

                // Verifica se o preço é válido (positivo)
                if(preco > 0){
                    valido = 1;
                }else{
                    printf("Preço inválido.\n");
                }
            }
            // Atualiza o maior preço abaixo de 2000
            if(preco < 2000){
                if(preco > maior_abaixo_2000){
                    maior_abaixo_2000 = preco;
                }
            }
            // Atualiza o maior preço a partir de 2000
            else{
                if(preco > maior_acima_2000){
                    maior_acima_2000 = preco;
                }
            }
        }
        // Exibe os resultados
        printf("\nMaior preço abaixo de 2000 reais: ");

        if(maior_abaixo_2000 != -1){
            printf("%.2f\n", maior_abaixo_2000);
        }else{
            printf("Nenhuma mercadoria abaixo de 2000 reais.\n");
        }

        printf("Maior preço a partir de 2000 reais: ");
        if(maior_acima_2000 != -1){
            printf("%.2f\n", maior_acima_2000);
        }else{
            printf("Nenhuma mercadoria a partir de 2000 reais.\n");
        }
    }

    return 0;
}
