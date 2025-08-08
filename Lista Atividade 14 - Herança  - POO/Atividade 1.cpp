#include <iostream>
#include <cmath>

using namespace std;

/* (a) Definir uma classe que represente um Ponto.
    (b) Criar construtores para instanciar um ponto, com e sem parâmetros.
    (c) Criar métodos públicos para:
        • Definir a posição do ponto;
        • Obter a posição do ponto;
        • Calcular a distância entre dois pontos, dado outro objeto da classe ponto;
        • Calcular a distância entre dois pontos, dadas as coordenadas de outro ponto,
          como um par de números.
    (d) Criar a classe Circulo derivada da classe Ponto.
    (e) Criar construtores para instanciar um círculo, com e sem parâmetros.
    (f) Criar a classe Esfera derivada da classe Circulo. Esta classe deve representar uma
    esfera e conter um método adicional para calcular o volume da esfera. Use a fórmula:
    Volume = 4
            3πr3
    (g) Criar um programa principal para testar as classes criadas. */

class Ponto{
protected: // Vai ser utilizada em outras classes
    double x;
    double y;

public:
    Ponto(){// Construtor
        x = 0;
        y = 0;
    }
    Ponto(double x, double y){//Definindo os parametros do construtor
        this->x = x;
        this->y = y;
    }

    void setPosicao(double x, double y){
        this->x = x;
        this->y = y;
    }

    void getPosicao(double &x, double &y){
        this->x = x;
        this->y = y;
    }

    double calcular_distancia(const Ponto &outro) const{
        return sqrt(pow(x - outro.x, 2) + pow(y - outro.y, 2));
    }

    double calcular_distancia_coordenadas(double novo_x, double novo_y) const{
        return sqrt(pow(x - novo_x, 2)+ pow(y - novo_y, 2));
    }
};

class Circulo:public Ponto{
protected:
    double raio;

public:
    Circulo():Ponto(){ //Construtor que herda "Ponto"
        raio = 0;
    }

    Circulo(double x, double y, double raio): Ponto(x,y){ //Construtor com parametros
        this->raio = raio;
    }

    void setRaio(double r){
        raio = r;
    }

    double getRaio() const{
        return raio;
    }

     double area() const{
        return M_PI * raio * raio;
    }
};

class Esfera:public Circulo{
public:
    Esfera():Circulo(){} // Contrutor que herda de "Circulo"

    Esfera(double x, double y, double r):Circulo(x, y, r){} //Construtor com parametros

    double volume_esfera() const{
        return (4.0 / 3.0) * M_PI * pow(raio, 3);
    }
};

int main()
{
    Ponto p1(3, 4);
    Ponto p2;
    p2.setPosicao(0, 0);
    double d = p1.calcular_distancia(p2);
    cout << "Distancia entre ponto 1 e ponto 2: " << d << endl;

    Circulo c(5, 5, 2);
    double area = c.area();
    cout << "Area do circulo: " << area << endl;

    Esfera e(1, 1, 3);
    double volume = e.volume_esfera();
    cout << "Volume da esfera: " << volume << endl;

 return 0;
}
