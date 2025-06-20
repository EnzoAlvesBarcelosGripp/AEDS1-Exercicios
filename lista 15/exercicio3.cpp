#include <iostream>
using namespace std;

class Relogio {
    private:
        int hora;
        int min;
        int seg;
    public:
    Relogio(int hora,int min,int seg){
        this->hora = hora;
        this->min = min;
        this->seg = seg;
    }
    void getHora(int& h,int& m,int& s){
        h = hora;
        m = min;
        s = seg;
        return;
    }
    void setHora(int hora, int min, int seg) {
    this->hora = hora;
    this->min = min;
    this->seg = seg;
    }

    void SegundoMais(){
        seg ++;
        if (seg == 60){
            seg = 0;
            min ++;
            if (min == 60){
                min = 0;
                hora ++;
            }
        }
        return;
    }
    void exibir(){
        cout<<(hora<10?"0":"")<<hora<<":"<< (min < 10 ? "0" : "") << min << ":" << (seg < 10 ? "0" : "") << seg << endl;
    }
};
int main (){
    Relogio r(22,59,59);
    r.exibir();
    r.SegundoMais();
    r.exibir();
    r.SegundoMais();
    r.exibir();
    return 0;
}