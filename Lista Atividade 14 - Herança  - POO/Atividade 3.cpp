#include <iostream>
#include <cmath>

using namespace std;

/* a) Implemente a classe Vendedor como subclasse da classe Empregado. Um determinado
 vendedor tem, além dos atributos da classe Empregado, os seguintes atributos adicionais:
    • double valorVendas (correspondente ao valor monetário dos artigos vendidos)
    • double comissao (porcentagem do valorVendas que será adicionada ao salário base
      do vendedor)
 Implemente os construtores e os métodos para manipular os atributos (get e set) da
 classe Vendedor.
    b) Na classe Vendedor, implemente um método calcularSalario que retorne o salário
 líquido do vendedor, incluindo a comissão no cálculo do salário e deduzindo os impostos.
 O cálculo do salário líquido pode ser representado pela fórmula:
    salarioLiquido = (salarioBase + (comissao × valorV endas)) × (1 − imposto) */

class Empregado{
private:
    string nome;
    double salario_base;
    double imposto;

public:
    Empregado(){//Construtor
        nome = "";
        salario_base = 0.0;
        imposto = 0.0;
    }

    Empregado(string nome, double salario_base, double imposto){//Construtor com parametros
        this->nome = nome;
        this->salario_base = salario_base;
        this->imposto = imposto;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    string getNome(){
        return nome;
    }

    void setSalarioBase(double salario_base){
        this->salario_base = salario_base;
    }

    double getSalarioBase(){
        return salario_base;
    }

    void setImposto(double imposto){
        this->imposto = imposto;
    }

    double getImposto(){
        return imposto;
    }
};

class Vendedor:public Empregado{
private:
    double valor_vendas;
    double comissao;

public:
    Vendedor():Empregado(), valor_vendas(0.0), comissao(0.0){}//Construtor

    Vendedor(string nome, double salario_base, double imposto, double valor_vendas, double comissao): Empregado(nome, salario_base, imposto){ //Construtor com parametros
        this->valor_vendas = valor_vendas;
        this->comissao = comissao;
    }

    void setValorVendas(double valor_vendas){
        this->valor_vendas = valor_vendas;
    }

    double getValorVendas(){
        return valor_vendas;
    }

    void setComissao(double comissao){
        this->comissao = comissao;
    }

    double getComissao(){
        return comissao;
    }

    double calcular_salario(){
        double salario_liquido = getSalarioBase() + (comissao * valor_vendas);
        return salario_liquido * (1 - getImposto());
    }
};

int main()
{
    Vendedor vendedor1("Mariano", 1000.00, 0.14, 80000.00, 0.05);

    Vendedor vendedor2("Joana", 1500.00, 0.12, 120000.00, 0.06);

    cout << "Vendedor 1: " << vendedor1.getNome() << endl;
    cout << "Salario Liquido: R$ " << vendedor1.calcular_salario() << endl;

    cout << "\nVendedor 2: " << vendedor2.getNome() << endl;
    cout << "Salario Liquido: R$ " << vendedor2.calcular_salario() << endl;

 return 0;
}
