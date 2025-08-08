#include <iostream>

using namespace std;

/* Crie uma classe em C++ chamada Relogio para armazenar um hor�rio, composto por
hora, minuto e segundo. A classe deve representar esses componentes de hor�rio e deve
apresentar os m�todos descritos a seguir:
� um m�todo chamado setHora, que deve receber o hor�rio desejado por par�metro
(hora, minuto e segundo);
� um m�todo chamado getHora para retornar o hor�rio atual, atrav�s de 3 vari�veis
passadas por refer�ncia;
� um m�todo para avan�ar o hor�rio para o pr�ximo segundo (lembre-se de atualizar
o minuto e a hora, quando for o caso). */

class Relogio{
private:
    int hora, minuto, segundo;

public:
    Relogio(){ // AQUI QUIS FAZER DIFERENTE DA QUEST�O, COLOQUEI UM CONSTRUTOR PARA PRATICAR.
        hora = minuto = segundo = 0;
    }

    void setHora(int h, int m, int s){
        if(h >= 0 && h < 24){
            hora = h;
        }if(m >= 0 && m < 60){
            minuto = m;
        }if(s >= 0 && s < 60){
            segundo = s;
        }
    }

    void getHora(int &h, int &m, int &s){
        h = hora;
        m = minuto;
        s = segundo;
    }

    void avancaSegundo(){
        segundo++;
        if(segundo == 60){
            segundo = 0;
            minuto++;
            if(minuto == 60){
                minuto = 0;
                hora++;
                if(hora == 24){
                    hora = 0;
                }
            }
        }
    }
};

int main()
{
    Relogio r;
    r.setHora(23,59,59);

    int hora, minuto, segundo;

    r.getHora(hora, minuto, segundo);
    cout << "Hora: " << hora << ":" << minuto << ":" << segundo << endl;

    r.avancaSegundo();

    r.getHora(hora, minuto, segundo);
    cout << "Depois de um segundo: " << hora << ":" << minuto << ":" << segundo << endl;

 return 0;
}

