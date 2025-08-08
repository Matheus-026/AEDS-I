#include <iostream>
#include <cmath>

using namespace std;

/* Definir uma classe que represente um c�rculo. Esta classe deve possuir m�todos Privados para:
    � calcular a �rea do c�rculo;
    � calcular a dist�ncia entre os centros de 2 c�rculos;
    � calcular a circunfer�ncia do c�rculo.

E m�todos P�blicos para:

    � definir o raio do c�rculo, dado um n�mero real;
    � aumentar o raio do c�rculo, dado um percentual de aumento;
    � definir o centro do c�rculo, dada uma posi��o (X,Y);
    � imprimir o valor do raio;
    � imprimir o centro do c�rculo;
    � imprimir a �rea do c�rculo.
Criar um programa principal para testar a classe. */


class Circulo{
private:
    double raio;
    double x,y;

    double calcular_area()const{
        return M_PI * raio * raio;
    }

    double calcular_distancia(const Circulo& outro)const{
        return sqrt(pow(x - outro.x, 2) + pow(y - outro.y, 2));
    }

    double calcular_circunferencia()const{
        return 2 * M_PI * raio;
    }

public:
    Circulo():raio(0), x(0), y(0){}

    void definirRaio(double raio){
        if(raio > 0){
        this->raio = raio;
        }
    }

    void aumentarRaio(double percentual){
        if(percentual > 0){
            raio = raio + raio * (percentual / 100.0);
        }
    }

    void definirCentro(double novoX, double novoY){
        x = novoX;
        y = novoY;
    }

    void imprimirRaio() const{
        cout << "Raio: " << raio << endl;
    }

    void imprimirCentro() const{
        cout << "Centro: (" << x << ", " << y << ")" << endl;
    }

    void imprimirArea() const{
        cout << "Area: " << calcular_area() << endl;
    }

    void imprimirCircunferencia() const{
        cout << "Circunferencia: " << calcular_circunferencia() << endl;
    }

    void imprimirDistancia(const Circulo& outro) const{
        cout << "Distancia entre os centros: " << calcular_distancia(outro) << endl;
    }
};

int main()
{
    Circulo c1, c2;

    c1.definirRaio(5.0);
    c1.definirCentro(2.0, 3.0);

    c2.definirRaio(3.0);
    c2.definirCentro(7.0, 1.0);

    cout << "-Circulo 1:-" << endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();
    c1.imprimirCircunferencia();

    cout << "\n-Circulo 2:-" << endl;
    c2.imprimirRaio();
    c2.imprimirCentro();
    c2.imprimirArea();
    c2.imprimirCircunferencia();

    cout << "\n-Distancia entre os centros-" << endl;
    c1.imprimirDistancia(c2);

    return 0;
}

