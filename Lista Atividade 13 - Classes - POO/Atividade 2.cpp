#include <iostream>

using namespace std;

/* Crie uma classe denominada Elevador para armazenar as informações de um elevador
dentro de um prédio. A classe deve armazenar o andar atual (0=térreo), total de andares
no prédio, excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes
nele.
A classe deve também disponibilizar os seguintes métodos:
• inicializa: que deve receber como parâmetros: a capacidade do elevador e o total
de andares no prédio (os elevadores sempre começam no térreo e vazios);
• entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver
espaço);
• sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro
dele);
• sobe: para subir um andar (não deve subir se já estiver no último andar);
• desce: para descer um andar (não deve descer se já estiver no térreo);
• get....: métodos para obter cada um dos dados armazenados. */

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

    Elevador e(capacidade, total_andar); //modificado por causa do construtor, ele vem depois para fazer as chamadas das funções

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

