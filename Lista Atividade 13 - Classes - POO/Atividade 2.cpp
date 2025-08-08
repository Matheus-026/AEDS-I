#include <iostream>

using namespace std;

/* Crie uma classe denominada Elevador para armazenar as informa��es de um elevador
dentro de um pr�dio. A classe deve armazenar o andar atual (0=t�rreo), total de andares
no pr�dio, excluindo o t�rreo, capacidade do elevador, e quantas pessoas est�o presentes
nele.
A classe deve tamb�m disponibilizar os seguintes m�todos:
� inicializa: que deve receber como par�metros: a capacidade do elevador e o total
de andares no pr�dio (os elevadores sempre come�am no t�rreo e vazios);
� entra: para acrescentar uma pessoa no elevador (s� deve acrescentar se ainda houver
espa�o);
� sai: para remover uma pessoa do elevador (s� deve remover se houver algu�m dentro
dele);
� sobe: para subir um andar (n�o deve subir se j� estiver no �ltimo andar);
� desce: para descer um andar (n�o deve descer se j� estiver no t�rreo);
� get....: m�todos para obter cada um dos dados armazenados. */

class Elevador{
private:
    int andar_atual;
    int total_andar;
    int capacidade;
    int pessoas;

public:
    Elevador(int capacidade, int total_andar){ //CHAMANDO COM CONSTRUTOR
        this->capacidade = capacidade;
        this->total_andar = total_andar;
        andar_atual = 0; //Terreo
        pessoas = 0; //Vazio
    }

    void entrar(){
        if(pessoas < capacidade){
            pessoas++;
        }else{
            cout << "Elevador cheio!" << endl;
        }
    }

    void sai(){
        if(pessoas > 0){
            pessoas--;
        }else{
            cout << "Elevador vazio!" << endl;
        }
    }

    void sobe(){
        if(andar_atual < total_andar){
            andar_atual++;
        }else{
            cout << "Voce ja esta no ultimo andar" << endl;
        }
    }

    void descer(){
        if(andar_atual > 0){
            andar_atual--;
        }else{
            cout << "Voce ja esta no terreo" << endl;
        }
    }

    // GETS

    int getAndar_Atual(){
        return andar_atual;
    }

    int getAndares_Total(){
        return total_andar;
    }

    int getPessoasPresentes(){
        return pessoas;
    }

    int getCapacidade(){
        return capacidade;
    }
};

int main()
{
    int capacidade, total_andar;

    cout << "Quantidade de pessoas no elevador: ";
    cin >> capacidade;

    cout << "Quantidade total de andares: ";
    cin >> total_andar;

    Elevador e(capacidade, total_andar); //modificado por causa do construtor, ele vem depois para fazer as chamadas das fun��es

    e.entrar();
    e.entrar();
    e.sobe();
    e.sobe();
    e.sai();
    e.descer();

    cout << "Andar atual: " << e.getAndar_Atual() << endl;
    cout << "Total de andares: " << e.getAndares_Total() << endl;
    cout << "Quantidade de pessoas: " << e.getPessoasPresentes() << endl;
    cout << "Capacidade do elevador: " << e.getCapacidade() << endl;

 return 0;
}

