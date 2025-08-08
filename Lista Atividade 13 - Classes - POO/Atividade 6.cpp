#include <iostream>

using namespace std;

/* Implemente um condicionador de ar. O condicionador possui 10 pot�ncias diferentes.
Cada unidade da pot�ncia do condicionador diminui a temperatura do ambiente em 1.8�C.
A varia��o que o condicionador consegue causar est� no intervalo [0�C - 18�C], ou seja,
zero graus de varia��o quando desligado e dezoito graus de varia��o quando ligado na
pot�ncia m�xima.
Atrav�s de um sensor, o condicionador � informado da temperatura externa. Dada essa
temperatura e a pot�ncia selecionada, o condicionador calcula e retorna a temperatura
do ambiente.
No programa principal, crie dois condicionadores. Informe duas temperaturas externas
diferentes para cada um (ex: 25�C e 31�C), ajuste o segundo em pot�ncia m�xima (10) e
o primeiro em pot�ncia m�dia (5). Finalmente, exiba a temperatura resultante de cada
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
        float reducao = potencia * 1.8; // cada unidade reduz 1.8�C
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

    ar1.setPotencia(5);   // pot�ncia m�dia
    ar2.setPotencia(10);  // pot�ncia m�xima

    cout << "Condicionador 1 - Temperatura ambiente: "
         << ar1.calcularTemperaturaAmbiente() << "�C" << endl;

    cout << "Condicionador 2 - Temperatura ambiente: "
         << ar2.calcularTemperaturaAmbiente() << "�C" << endl;

 return 0;
}
