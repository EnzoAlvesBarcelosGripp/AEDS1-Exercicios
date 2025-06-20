#include <iostream>
using namespace std;

class Carro {
    float tanque;     // litros no tanque
    float consumo;    // km por litro
    float limite;     // capacidade do tanque
    float dist;       // distância total percorrida

public:
    Carro() {
        tanque = 0;
        consumo = 15;
        limite = 50;
        dist = 0;
    }

    float getTanque() {
        return tanque;
    }

    float getDistancia() {
        return dist;
    }

    void abastecer(float litros) {
        if (litros < 0) {
            cout << "Erro: valor invalido de combustivel!" << endl;
        } else if (tanque + litros > limite) {
            cout << "O limite do tanque foi ultrapassado! Máximo é 50L." << endl;
        } else 
            tanque += litros;
    }

    void mover(float distancia) {
        float necessario = distancia / consumo;
        if (tanque >= necessario) {
            tanque -= necessario;
            dist += distancia;
        } else 
            cout << "Combustivel insuficiente para percorrer essa distancia." << endl;
    }

    void info() {
        cout << "Distancia percorrida: " << dist << " km" << endl;
        cout << "Combustivel restante: " << tanque << " L" << endl;
    }
};

int main() {
    Carro carro1, carro2;

    carro1.abastecer(20);
    carro2.abastecer(30);

    carro1.mover(200);
    carro2.mover(400);

    cout << "Carro 1:" << endl;
    carro1.info();

    cout << "\nCarro 2:" << endl;
    carro2.info();

    return 0;
}
