#include <iostream>

using namespace std;

/* Implemente uma classe televis�o. A televis�o tem um controle de volume do som e um
controle de sele��o de canal. O controle de volume permite aumentar ou diminuir a po-
t�ncia do volume de som em uma unidade de cada vez. O controle de canal tamb�m
permite aumentar e diminuir o n�mero do canal em uma unidade, por�m, tamb�m pos-
sibilita trocar para um canal indicado. Tamb�m devem existir m�todos para consultar o
valor do volume de som e o canal selecionado. No programa principal, crie uma televis�o
e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos
os atributos. */

class Televisao{
private:
    int volume;
    int canal;

public:
    Televisao(){
        volume = 10; // volume inicial
        canal = 1;   // canal inicial
    }

    void aumentarVolume(){
        if(volume < 100){ // limite
            volume++;
        }
    }

    void diminuirVolume(){
        if(volume > 0){
            volume--;
        }
    }

    void aumentarCanal(){
        canal++;
    }

    void diminuirCanal(){
        if(canal > 1){
            canal--;
        }
    }

    void trocarCanal(int novoCanal){
        if(novoCanal > 0){
            canal = novoCanal;
        }
    }

    // M�todos para consultar o volume e o canal
    int getVolume() const{
        return volume;
    }

    int getCanal() const{
        return canal;
    }
};

int main()
{
    Televisao tv;
    // Trocar de canal algumas vezes
    tv.aumentarCanal();
    tv.aumentarCanal();
    tv.diminuirCanal();
    tv.trocarCanal(5);

    // Aumentar o volume algumas vezes
    tv.aumentarVolume();
    tv.aumentarVolume();
    tv.aumentarVolume();

    // Exibir o volume e canal atual
    cout << "Canal atual: " << tv.getCanal() << endl;
    cout << "Volume atual: " << tv.getVolume() << endl;

    return 0;
}
