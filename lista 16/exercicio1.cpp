#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Ponto{
    int x,y;
public:
    Ponto(int x,int y):x(x),y(y){}
    int getX() const{
        return x;
    }
    void setX(int x){
        this->x = x;
    }
    int getY() const{
        return y;
    }
    void setY(int y){
        this->y =y;
    }
    void mostrarPonto(){
        cout<<"Ponto ("<<x<<","<<y<<")"<<endl;
    }
    float CalcDistPontos(const Ponto& outro) const{
        return sqrt((outro.x - x) * (outro.x - x) + (outro.y - y) * (outro.y - y));
    }
};
class Circulo : public Ponto{
    int raio;
public:
    Circulo(int raio,int x,int y): Ponto(x,y),raio(raio){}
    int getRaio(){
        return raio;
    }
    void setRaio(int raio){
        this->raio =raio;
    }   
    float areaPonto(){
        return M_PI*raio*raio;
    }
    float circPonto(){
        return 2*M_PI*raio;
    }
};
class Roda: public Circulo {
    string material;
    int aro;
    string fabricante;
public:
    Roda(int x,int y,int raio, string material="Aco",string fabricante="Seu Jairo",int aro=24):
    Circulo(raio,x,y),material(material),fabricante(fabricante),aro(aro){}
    string getMaterial(){
        return material;
    }
    string getFabricante(){
        return fabricante;
    }
    int getaro(){
        return aro;
    }
    void setMaterialFabrivanteAro(int aro,string material,string fabricante){
        this->fabricante =fabricante;
        this->material =material;
        this->aro =aro;
    }
    void mostrar(){
        cout<< "Fabricante: "<< fabricante <<endl;
        cout<< "Material: "<< material<<endl;
        cout<< "Aro: "<<aro<<endl;
    }
};
class Esfera: public Circulo{
    int raioE;
public:
    Esfera(int x,int y,int raio,int raioE): Circulo(x,y,raio),raioE(raioE){}
    int getRaioE()const{
        return raioE;
    }
    void setRaioE_C(int raioE){
        this ->raioE =raioE;
    }
    float volumeEsfera()const{
        return (4.0/3.0)*M_PI*pow(raioE,3);
    }
};
int main (){
    Ponto p(2,2),p2(4,4);
    p.mostrarPonto();
    cout<<"Distancia: "<<p.CalcDistPontos(p2)<<endl;
    Circulo C(5,2,2);
    cout<<"Area: "<<C.areaPonto()<<endl<<"Circunferencia: "<<C.circPonto()<<endl;
    Roda r(2,2,5);
    cout<<"Material: "<<r.getMaterial()<<endl<<"Fabricante: "<<r.getFabricante()<<endl<<"Aro: "<<r.getaro()<<endl;
    Esfera e(2,2,5,10);
    cout<< "Volume: "<<e.volumeEsfera()<<endl;
    return 0;
}