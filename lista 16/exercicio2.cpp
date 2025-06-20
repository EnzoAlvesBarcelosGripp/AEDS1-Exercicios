#include <iostream>
#include<string>
using namespace std;
typedef struct{
    int dia,mes,ano;
}Data;
typedef struct{
    string modelo;
    string marca;
    int anoFabricacao;
    float preco;
    Data venda;
}Carro;
void carroMaisCaro(Carro C[],int num){
    int indice=0;
    for (int i=1;i<num;i++){
        if(C[indice].preco < C[i].preco){
            indice = i;
        }
    }
    cout<<"Preco: "<<C[indice].preco << endl <<"Data de venda: "<<C[indice].venda.dia<<"/"<<C[indice].venda.mes<<"/"<<C[indice].venda.ano<<endl;
}
int main (){
    Carro C[5];
    for(int i=0;i<5;i++){
    cout <<"informe a dia de venda do carro: ";
    cin >>C[i].venda.dia;
    cout <<"informe a mes de venda do carro: ";
    cin >>C[i].venda.mes;
    cout<<"informe a ano de venda do carro: ";
    cin >>C[i].venda.ano;
    cin.ignore();
    cout<<"Informe o modelo do carro";
    getline(cin,C[i].modelo);
    cout<<"Informe a marca do carro";
    getline(cin,C[i].marca);
    cout<<"Informe o ano de fabricacao do carro";
    cin>>C[i].anoFabricacao;
    cout<<"Informe o preco do carro";
    cin>>C[i].preco;
    cin.ignore();
}
carroMaisCaro(C,5);
return 0;
}