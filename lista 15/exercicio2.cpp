#include <iostream>
using namespace std;

class Elevador {
private:
    int andarAtual;
    int capacidadeMax;
    int totalAndares;
    int capacidadeAtual;

public:
    Elevador() {
        andarAtual = 0;
        capacidadeAtual = 0;
        capacidadeMax = 0;
        totalAndares = 0;
    }

    void inicializa(int capacidadeMax, int totalAndares) {
        this->capacidadeMax = capacidadeMax;
        this->totalAndares = totalAndares;
        this->andarAtual = 0;
        this->capacidadeAtual = 0;
    }

    void entra() {
        if (capacidadeAtual < capacidadeMax) {
            capacidadeAtual++;
        } else {
            cout << "Lotação máxima atingida!" << endl;
        }
    }

    void sai() {
        if (capacidadeAtual > 0) {
            capacidadeAtual--;
        } else {
            cout << "Não há ninguém no elevador para sair!" << endl;
        }
    }

    void sobe() {
        if (andarAtual < totalAndares) {
            andarAtual++;
        } else {
            cout << "O elevador está no último andar!" << endl;
        }
    }

    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
        } else {
            cout << "O elevador já está no térreo!" << endl;
        }
    }

    int getAndarAtual() {
        return andarAtual;
    }

    int getCapacidadeMax() {
        return capacidadeMax;
    }

    int getTotalAndares() {
        return totalAndares;
    }

    int getCapacidadeAtual() {
        return capacidadeAtual;
    }
};

int main (){
    Elevador e;

    e.inicializa(5,10);

    cout << "Elevador iniciado com capacidade para " << e.getCapacidadeMax()
         << " pessoas e " << e.getTotalAndares() << " andares." << endl;

    e.entra();
    e.entra();
    e.entra();
    cout << "Pessoas no elevador: " << e.getCapacidadeAtual() << endl;

    e.sobe();
    e.sobe();
    cout << "Andar atual: " << e.getAndarAtual() << endl;

    e.sai();
    cout << "Pessoas no elevador após uma saída: " << e.getCapacidadeAtual() << endl;

    e.desce();
    cout << "Andar atual após descer: " << e.getAndarAtual() << endl;
    return 0;
}
