#include <iostream>

using namespace std;

/* Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros
de gasolina. O carro consome 15 km/litro. Deve ser possível:
• Abastecer o carro com uma certa quantidade de gasolina;
• Mover o carro em uma determinada distância (medida em km);
• Retornar a quantidade de combustível e a distância total percorrida.
No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância
percorrida e o total de combustível restante para cada um. */

class Carro{
private:
    float combustivel;
    float distancia_percorrida;
    const float consumo = 15.0;
    const float capacidade_maxima = 50.0;

public:
    Carro(){
        combustivel = 0;
        distancia_percorrida = 0;
    }

    void abastecer(float litros){
        if(litros <= 0){
            return;
        }
        if(combustivel + litros > capacidade_maxima){
            combustivel = capacidade_maxima;
        }else{
            combustivel = combustivel + litros;
        }
    }

    void mover(float distancia){
        if(distancia <= 0){
            return;
        }

        float autonomia = combustivel * consumo; // quanto pode andar com o combustível atual

        if(distancia <= autonomia){
            distancia_percorrida = distancia_percorrida + distancia;
            combustivel = combustivel - distancia / consumo;
        }else{
            cout << "Combustível insuficiente para percorrer " << distancia << " km. ";
            cout << "Percorrendo apenas " << autonomia << " km." << endl;
            distancia_percorrida = distancia_percorrida + autonomia;
            combustivel = 0.0;
        }
    }

    float getCombustivel() const{
        return combustivel;
    }

    float getDistanciaPercorrida() const{
        return distancia_percorrida;
    }
};

// Programa principal
int main()
{
    Carro carro1, carro2;

    // Abastece os carros
    carro1.abastecer(20); // 20 litros → 300 km de autonomia
    carro2.abastecer(30); // 30 litros → 450 km de autonomia

    // Movimenta os carros
    carro1.mover(200); // consome 200 / 15 = 13.33 litros
    carro2.mover(400); // consome 400 / 15 = 26.66 litros

    // Exibe resultados
    cout << "\nCarro 1:" << endl;
    cout << "Distância percorrida: " << carro1.getDistanciaPercorrida() << " km" << endl;
    cout << "Combustível restante: " << carro1.getCombustivel() << " litros" << endl;

    cout << "\nCarro 2:" << endl;
    cout << "Distância percorrida: " << carro2.getDistanciaPercorrida() << " km" << endl;
    cout << "Combustível restante: " << carro2.getCombustivel() << " litros" << endl;

    return 0;
}


