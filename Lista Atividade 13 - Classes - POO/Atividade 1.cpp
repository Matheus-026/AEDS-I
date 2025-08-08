#include <iostream>

using namespace std;

/* Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e
altura. Crie os métodos públicos necessários para sets e gets e também um método para
imprimir os dados de uma pessoa. */

class Pessoa{
private:
    string nome;
    int idade;
    int altura;

public:
    void setNome(string nome){
        this->nome = nome;
    }
    void setIdade(int idade){
        this->idade = idade;
    }

    void setAltura(int altura){
        this->altura = altura;
    }

    string setNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }

    int getAltura(){
        return altura;
    }

    void imprimir_dados(){ // OBS: Para sets e gets é bom usar o endl, lembrete baum.
        cout << "Nome:" << nome << endl;
        cout << "Idade:" << idade << " anos" << endl;
        cout << "Altura:" << altura << " cm" << endl;
    }
};

int main()
{
    Pessoa p;

    string nome;
    int idade, altura;

    cout << "Digite o nome da pessoa: "; // Para main o endl não é necessario, então grave rapido.
    getline(cin,nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a altura: ";
    cin >> altura;

    // Chamar os sets como a função para funcionar na main

    p.setNome(nome);
    p.setIdade(idade);
    p.setAltura(altura);
    p.imprimir_dados();

 return 0;
}
