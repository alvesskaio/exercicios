#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, area_tri, area_circ, area_trap, area_quad, area_retan;
    const double pi = 3.14159;
    cin >> A >> B >> C;

    // Base * altura / 2
    area_tri = (A * C) / 2;

    // raio^2 * pi
    area_circ = pow(C, 2) * pi;

    // ((lado + lado) * altura) / 2
    area_trap = ((A + B) * C) / 2;

    // Lado * lado
    area_quad = B * B;

    // base * altura
    area_retan = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << area_tri << endl;
    cout << "CIRCULO: " << area_circ << endl;
    cout << "TRAPEZIO: " << area_trap << endl;
    cout << "QUADRADO: " << area_quad << endl;
    cout << "RETANGULO: " << area_retan << endl;

    return 0;
}