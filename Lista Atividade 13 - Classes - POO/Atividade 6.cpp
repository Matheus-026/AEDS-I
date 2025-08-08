#include <iostream>

using namespace std;

/* Implemente um condicionador de ar. O condicionador possui 10 potências diferentes.
Cada unidade da potência do condicionador diminui a temperatura do ambiente em 1.8ºC.
A variação que o condicionador consegue causar está no intervalo [0ºC - 18ºC], ou seja,
zero graus de variação quando desligado e dezoito graus de variação quando ligado na
potência máxima.
Através de um sensor, o condicionador é informado da temperatura externa. Dada essa
temperatura e a potência selecionada, o condicionador calcula e retorna a temperatura
do ambiente.
No programa principal, crie dois condicionadores. Informe duas temperaturas externas
diferentes para cada um (ex: 25ºC e 31ºC), ajuste o segundo em potência máxima (10) e
o primeiro em potência média (5). Finalmente, exiba a temperatura resultante de cada
ambiente. */

class CondicionadorAr{
private:
    int potencia;
    float temperatura_externa;

public:
    CondicionadorAr(){
        potencia = 0;
        temperatura_externa = 25.0;
    }

    // Define a temperatura externa
    void setTemperaturaExterna(float temp){
        this->temperatura_externa = temp;
    }

    void setPotencia(int p){
        if(p >= 0 && p <= 10){
            potencia = p;
        }
    }

    // Calcula a temperatura do ambiente
    float calcularTemperaturaAmbiente() const{
        float reducao = potencia * 1.8; // cada unidade reduz 1.8ºC
        float temperatura_ambiente = temperatura_externa - reducao;

        return temperatura_ambiente;
    }

    int getPotencia() const{
        return potencia;
    }

    float getTemperaturaExterna() const{
        return temperatura_externa;
    }
};

int main()
{
    CondicionadorAr ar1, ar2;

    ar1.setTemperaturaExterna(25.0);
    ar2.setTemperaturaExterna(31.0);

    ar1.setPotencia(5);   // potência média
    ar2.setPotencia(10);  // potência máxima

    cout << "Condicionador 1 - Temperatura ambiente: "
         << ar1.calcularTemperaturaAmbiente() << "°C" << endl;

    cout << "Condicionador 2 - Temperatura ambiente: "
         << ar2.calcularTemperaturaAmbiente() << "°C" << endl;

 return 0;
}
