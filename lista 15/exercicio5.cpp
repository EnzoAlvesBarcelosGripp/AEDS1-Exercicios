#include <iostream>
using namespace std;

class Televisao {
private:
    int VolumeAtual;
    int canalAtual;

public:
    Televisao(int volumeInicial, int canalInicial) {
        if (volumeInicial < 0 || volumeInicial > 100) {
            cout << "Volume invalido! Definindo volume para 50." << endl;
            VolumeAtual = 50;
        } else {
            VolumeAtual = volumeInicial;
        }

        if (canalInicial < 0) {
            cout << "Canal invalido! Definindo canal para 1." << endl;
            canalAtual = 1;
        } else {
            canalAtual = canalInicial;
        }
    }

    void aumVolume() {
        if (VolumeAtual == 100) {
            cout << "O volume ja esta no maximo (100)." << endl;
        } else {
            VolumeAtual++;
        }
    }

    void dimVolume() {
        if (VolumeAtual == 0) {
            cout << "O volume ja esta no minimo (0)." << endl;
        } else {
            VolumeAtual--;
        }
    }

    void aumCanal() {
        canalAtual++;
    }

    void dimCanal() {
        if (canalAtual == 0) {
            cout << "Nao ha canais com numeros negativos!" << endl;
        } else {
            canalAtual--;
        }
    }

    void trocaCanal(int CanalRecebido) {
        if (CanalRecebido >= 0) {
            canalAtual = CanalRecebido;
        } else {
            cout << "Canal invalido! Nao foi possivel trocar." << endl;
        }
    }

    void Consulta() {
        cout << "Volume Atual: " << VolumeAtual << endl;
        cout << "Canal Atual: " << canalAtual << endl;
    }
};

int main() {
    Televisao tv(20, 5);

    tv.aumCanal();
    tv.aumCanal();
    tv.dimCanal();
    tv.trocaCanal(12);

    tv.aumVolume();
    tv.aumVolume();
    tv.dimVolume();

    tv.Consulta();

    return 0;
}
