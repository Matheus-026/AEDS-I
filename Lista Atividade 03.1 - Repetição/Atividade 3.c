#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma empresa deseja reestruturar sua pol�tica de pre�os. Para atend�-la, construa um
programa que leia o pre�o de um conjunto de n mercadorias, sendo n tamb�m um valor
lido. O programa dever� calcular e escrever o maior pre�o dentre as mercadorias abaixo
de dois mil reais e o maior pre�o dentre aquelas a partir de dois mil reais. Rejeitar a
leitura de valores inv�lidos. */

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, i, valido;
    float preco, maior_abaixo_2000 = -1, maior_acima_2000 = -1;

    // Solicita o n�mero de mercadorias
    printf("Digite o n�mero de mercadorias: ");
    scanf("%i", &num);

    // Verifica se o n�mero de mercadorias � v�lido
    if (num <= 0) {
        printf("N�mero de mercadorias inv�lido.\n");
    }else{
        for(i = 0; i < num; i++){
            valido = 0;
            while(!valido){
                printf("Digite o pre�o da mercadoria %i: ", i + 1);
                scanf("%f", &preco);

                // Verifica se o pre�o � v�lido (positivo)
                if(preco > 0){
                    valido = 1;
                }else{
                    printf("Pre�o inv�lido.\n");
                }
            }
            // Atualiza o maior pre�o abaixo de 2000
            if(preco < 2000){
                if(preco > maior_abaixo_2000){
                    maior_abaixo_2000 = preco;
                }
            }
            // Atualiza o maior pre�o a partir de 2000
            else{
                if(preco > maior_acima_2000){
                    maior_acima_2000 = preco;
                }
            }
        }
        // Exibe os resultados
        printf("\nMaior pre�o abaixo de 2000 reais: ");

        if(maior_abaixo_2000 != -1){
            printf("%.2f\n", maior_abaixo_2000);
        }else{
            printf("Nenhuma mercadoria abaixo de 2000 reais.\n");
        }

        printf("Maior pre�o a partir de 2000 reais: ");
        if(maior_acima_2000 != -1){
            printf("%.2f\n", maior_acima_2000);
        }else{
            printf("Nenhuma mercadoria a partir de 2000 reais.\n");
        }
    }

    return 0;
}
