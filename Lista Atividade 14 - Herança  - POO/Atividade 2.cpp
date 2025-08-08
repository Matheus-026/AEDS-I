#include <iostream>
#include <cmath>

using namespace std;

/* Desenvolva um programa em C++ para gerenciar os dados de um grupo de carros. Cada
 carro � representado por uma estrutura que cont�m as seguintes informa��es:
    � Modelo do carro
    � Marca do carro
    � Ano de fabrica��o do carro
    � Pre�o do carro
    � Data da venda do carro (outra estrutura contendo dia, m�s e ano)
 a) Crie uma estrutura chamada Data contendo tr�s campos: dia, m�s e ano.
 b) Crie uma estrutura chamada Carro para representar um carro, que deve conter os
 campos mencionados acima: modelo, marca, ano de fabrica��o, pre�o e data da
 venda.
 c) Suponha que as estruturas criadas anteriormente tenham escopo global e possam ser
 usadas no programa principal e nas demais fun��es do c�digo. Escreva uma fun��o
 chamada carroMaisCaro que receba como par�metro uma lista contendo os dados
 de n carros (structs do tipo Carro) e mostre na tela o pre�o e a data da venda do
 carro mais caro da lista. A fun��o deve obedecer � seguinte defini��o:
        void carroMaisCaro(Carro lista[] , int n); */

class Data{
private:
    int dia, mes, ano;

public:
    Data(){ //Construtor
        dia = 0;
        mes = 0;
        ano = 0;
    }

    void setData(int dia, int mes, int ano){
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }

    int getDia() const{
        return dia;
    }

    int getMes() const{
        return mes;
    }

    int getAno() const{
        return ano;
    }

    void exibirData() const{
        cout << dia << "/" << mes << "/" << ano;
    }
};

class Carro{
private:
    string modelo;
    string marca;
    int ano_fabricacao;
    float preco;
    Data data_venda;

public:
    Carro(){}//Construtor

    Carro(string modelo, string marca, int ano, float preco, Data data){//Construtor por parametro
        this->modelo = modelo;
        this->marca = marca;
        this->ano_fabricacao = ano;
        this->preco = preco;
        this->data_venda = data;
    }

    void setDados(string modelo, string marca, int ano, float preco, Data data){
        this->modelo = modelo;
        this->marca = marca;
        this->ano_fabricacao = ano;
        this->preco = preco;
        this->data_venda = data;
    }

    float getPreco() const{
        return preco;
    }

    Data getDataVenda(){
        return data_venda;
    }

    void exibirDados() const{
        cout << "Modelo: " << modelo << endl;
        cout << "Marca: " << marca << endl;
        cout << "Ano: " << ano_fabricacao << endl;
        cout << "Preco: " << preco << endl;
        cout << "Data da venda: ";
        data_venda.exibirData(); //Chamando a fun��o da classe Data
        cout << endl;
    }
};

void carroMaisCaro(Carro lista[], int n){

        int indice_mais_caro = 0;
        for(int i = 0; i < n; i++){
            if(lista[i].getPreco() > lista[indice_mais_caro].getPreco()){
                indice_mais_caro = i;
            }
        }

        cout << "\nCarro mais caro: " << endl;
        cout << "Preco: " << lista[indice_mais_caro].getPreco() << endl;
        cout << "Data da venda: ";
        lista[indice_mais_caro].getDataVenda().exibirData();
        cout << endl;
    }

int main()
{
    int n;

    cout << "Digite o numero de carros: ";
    cin >> n;

    Carro* lista = new Carro[n];

    for(int i = 0; i < n; i++){
        string modelo, marca;
        int dia, mes, ano, ano_venda;
        float preco;
        Data data;

        cout << "Modelo: ";
        cin >> ws;
        getline(cin, modelo);

        cout << "Marca: ";
        cin >> ws;
        getline(cin, marca);

        cout << "Ano de fabricacao: ";
        cin >> ano;

        cout << "Preco: ";
        cin >> preco;

        cout << "Data de venda: ";
        cin >> dia >> mes >> ano_venda;
        data.setData(dia, mes, ano_venda);

        lista[i].setDados(modelo, marca, ano, preco, data);
    }

    carroMaisCaro(lista, n);

    delete[]lista;

 return 0;
}

