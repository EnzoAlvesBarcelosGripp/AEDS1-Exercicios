#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    float altura;

public:
    // Construtor
    Pessoa(string nome, int idade, float altura) {
        this->nome = nome;
        this->idade = idade;
        this->altura = altura;
    }

    // Construtor padrão (opcional)
    Pessoa() {
        nome = "";
        idade = 0;
        altura = 0.0;
    }

    // Métodos set
    void setNome(string nome) {
        this->nome = nome;
    }
    void setIdade(int idade) {
        this->idade = idade;
    }
    void setAltura(float altura) {
        this->altura = altura;
    }

    // Métodos get
    string getNome() {
        return nome;
    }
    int getIdade() {
        return idade;
    }
    float getAltura() {
        return altura;
    }

    // Método para imprimir os dados
    void imprimirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Altura: " << altura << " metros" << endl;
    }
};

int main() {
    // Criando pessoa1 com construtor
    Pessoa pessoa1("Joao", 25, 1.75);

    // Criando pessoa2 e preenchendo com set
    Pessoa pessoa2;
    string nome;
    int idade;
    float altura;

    cout << "Digite o nome da pessoa2: ";
    getline(cin, nome);
    pessoa2.setNome(nome);

    cout << "Digite a idade da pessoa2: ";
    cin >> idade;
    pessoa2.setIdade(idade);

    cout << "Digite a altura da pessoa2 (em metros): ";
    cin >> altura;
    pessoa2.setAltura(altura);

    cout << endl << "Dados da pessoa1:" << endl;
    pessoa1.imprimirDados();

    cout << endl << "Dados da pessoa2:" << endl;
    pessoa2.imprimirDados();

    return 0;
}