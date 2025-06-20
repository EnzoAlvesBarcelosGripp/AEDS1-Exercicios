#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.141592653589793;
class CirculoSimples {
private:
    double x, y; 
    double raio;
    double calcularArea() const {
        return PI * raio * raio;
    }
    double calcularCircunferencia() const {
        return 2 * PI * raio;
    }
    double calcularDistancia(const CirculoSimples& outro) const {
        double dx = outro.x - this->x;
        double dy = outro.y - this->y;
        return sqrt(dx * dx + dy * dy);
    }
public:
    CirculoSimples(double x = 0.0, double y = 0.0, double raio = 0.0) : x(x), y(y), raio(raio) {}
    void definirRaio(double r) {
        raio = r;
    }
    void aumentarRaio(double percentual) {
        raio += raio * (percentual / 100.0);
    }
    void definirCentro(double novoX, double novoY) {
        x = novoX;
        y = novoY;
    }
    void imprimirRaio() const {
        cout << "Raio: " << raio << endl;
    }
    void imprimirCentro() const {
        cout << "Centro: (" << x << ", " << y << ")" << endl;
    }
    void imprimirArea() const {
        cout << "Área: " << calcularArea() << endl;
    }
    void imprimirCircunferencia() const {
        cout << "Circunferência: " << calcularCircunferencia() << endl;
    }
    void imprimirDistanciaAte(const CirculoSimples& outro) const {
        cout << "Distância entre centros: " << calcularDistancia(outro) << endl;
    }
};
int main() {
    CirculoSimples c1;
    c1.definirRaio(5.0);
    c1.definirCentro(0.0, 0.0);
    CirculoSimples c2;
    c2.definirRaio(3.0);
    c2.definirCentro(4.0, 3.0);
    cout << "Círculo 1:" << endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();
    c1.imprimirCircunferencia();
    cout << "\nCírculo 2:" << endl;
    c2.imprimirRaio();
    c2.imprimirCentro();
    c2.imprimirArea();
    c2.imprimirCircunferencia();
    cout << "\nDistância entre os centros:" << endl;
    c1.imprimirDistanciaAte(c2);
    cout << "\nAumentando o raio do círculo 1 em 20%..." << endl;
    c1.aumentarRaio(20);
    c1.imprimirRaio();
}
