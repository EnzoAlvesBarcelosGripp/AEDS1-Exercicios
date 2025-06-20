#include <iostream>
#include <algorithm>
using namespace std;

class CondicionadorAr {
    int potencia;
    float tempExterna;

public:
    CondicionadorAr(int potencia, float tempExterna) {
        this->potencia = potencia;
        this->tempExterna = tempExterna;
    }

    void ConfiguraPotencia(int potencia) {
        if (potencia > 10) {
            cout << "Potencia so vai ate 10, insira outro valor entre [0,10]!" << endl;
        } else if (potencia < 0) {
            cout << "O valor minimo e 0, insira outro valor entre [0,10]!" << endl;
        } else {
            this->potencia = potencia;
        }
    }

    void ConfiguraTempExterna(float tempExterna) {
        this->tempExterna = tempExterna;
    }
    void tempAmbiente() {
        float tempDoAr = 18.0f - (potencia * 1.8f);
       float tempAmbiente = (tempExterna + tempDoAr) / 2.0f;
        cout << "A temperatura ambiente eh: " << tempAmbiente << " ºC" << endl;
    }

    };
int main() {
    CondicionadorAr C1(5, 25.0f), C2(10, 31.0f);
    C1.tempAmbiente();
    C2.tempAmbiente();
    return 0;
}