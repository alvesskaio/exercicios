#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double raio, volume;
    const double pi = 3.14159;

    // Leitura do valor do raio
    cout << "Digite o valor do raio: ";
    cin >> raio;

    // Calcula o volume da esfera
    volume = (4.0 / 3) * pi * pow(raio, 3);

    // Exibe o volume com precisão de 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Volume da esfera = " << volume << endl;

    return 0;
}
/*
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double raio, volume;
    const double pi = 3.14159;

    // Leitura do valor do raio
    cin >> raio;

    // Calcula o volume da esfera
    volume = (4.0 / 3) * pi * pow(raio, 3);

    // Exibe o volume com precisão de 3 casas decimais
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;

    return 0;
}

*/
