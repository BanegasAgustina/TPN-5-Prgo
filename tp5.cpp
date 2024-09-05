#include <bits/stdc++.h>
using namespace std;

class CRaices {
private:
    double coefA, coefB, coefC;

public:
    CRaices(double a, double b, double c) : coefA(a), coefB(b), coefC(c) {}

    double discriminante() {
        return (coefB * coefB) - (4 * coefA * coefC);
    }

    bool tieneDosRaices() {
        return discriminante() > 0;
    }

    bool tieneUnaRaiz() {
        return discriminante() == 0;
    }

    void mostrarDosRaices() {
        if (tieneDosRaices()) {
            double disc = discriminante();
            double raiz1 = (-coefB + sqrt(disc)) / (2 * coefA);
            double raiz2 = (-coefB - sqrt(disc)) / (2 * coefA);
            cout << "Soluciones: " << raiz1 << " y " << raiz2 << endl;
        } else {
            cout << "No tiene dos soluciones reales." << endl;
        }
    }

    void mostrarUnaRaiz() {
        if (tieneUnaRaiz()) {
            double raiz = -coefB / (2 * coefA);
            cout << "unica solucion: " << raiz << endl;
        } else {
            cout << "No tiene una unica solucion." << endl;
        }
    }

    void calcularSoluciones() {
        if (tieneDosRaices()) {
            mostrarDosRaices();
        } else if (tieneUnaRaiz()) {
            mostrarUnaRaiz();
        } else {
            cout << "No tiene solucion real." << endl;
        }
    }
};

int main() {
    CRaices eq1(1, -3, 2);
    eq1.calcularSoluciones();

    CRaices eq2(1, 2, 1);
    eq2.calcularSoluciones();

    CRaices eq3(1, 1, 1);
    eq3.calcularSoluciones();

    return 0;
}
