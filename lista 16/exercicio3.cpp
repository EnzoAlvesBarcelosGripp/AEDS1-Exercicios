#include<iostream>
#include<string>
using namespace std;

class Empregado{
    string nome;
    double salarioBase,imposto;
public:
    Empregado(string nome,double salarioBase,double imposto):nome(nome),salarioBase(salarioBase),imposto(imposto){}
    string getNome(){return nome;}
    double getSalarioBase(){return salarioBase;}
    double getImposto(){return imposto;}
    void setVariaveis(string nome,double salarioBase,double imposto){
        this-> nome = nome;
        if (salarioBase>0){
            this ->salarioBase =salarioBase;
        } else {
            cout<<"Por favor informe um salario positivo!"<<endl;
            return;
        }
        if(imposto>0 && imposto < 1){
            this->imposto = imposto;
        } else {
            cout<<"Por favor informe uma taxa de imposto valida [0,1]!"<<endl;
            return;
        }
    }
};
class Vendedor: public Empregado{
    float valorVendas;
    float comissao;
public: 
    Vendedor(string nome,double salarioBase,double imposto,float valorVendas,float comissao):       
    Empregado(nome,salarioBase,imposto),valorVendas(valorVendas),comissao(comissao){}
    float getValorVendas(){return valorVendas;}
    float getComissao(){return comissao;}
    void setComissao(float comissao){
        this->comissao =comissao;
    }
    void setValorVendas(float valorVendas){
        this->valorVendas =valorVendas;
    }
    double CalcularSalario(){
        double salarioLiq;
        salarioLiq = (getSalarioBase() + (comissao * valorVendas)) * (1 - getImposto());
        return salarioLiq;
    }
};
int main (){
    Vendedor v1("Julio",2000.0,0.5,50000.0,0.03),v2("Alan",20000000.0,0.02,500000,0.02);
    cout<<"Salario vendedor 1:"<<v1.CalcularSalario()<<endl;
    cout<<"salario vendedor 2:"<<v2.CalcularSalario()<<endl;
    return 0;
}