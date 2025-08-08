#include <iostream>

using namespace std;

/* Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por
hora, minuto e segundo. A classe deve representar esses componentes de horário e deve
apresentar os métodos descritos a seguir:
• um método chamado setHora, que deve receber o horário desejado por parâmetro
(hora, minuto e segundo);
• um método chamado getHora para retornar o horário atual, através de 3 variáveis
passadas por referência;
• um método para avançar o horário para o próximo segundo (lembre-se de atualizar
o minuto e a hora, quando for o caso). */

class Relogio{
private:
    int hora, minuto, segundo;

public:
    Relogio(){ // AQUI QUIS FAZER DIFERENTE DA QUESTÃO, COLOQUEI UM CONSTRUTOR PARA PRATICAR.
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

