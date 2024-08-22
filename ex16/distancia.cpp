#include <iostream>

using namespace std;

int main() {
    int distancia;

    // Leitura da distância
    cin >> distancia;

    // Cálculo do tempo necessário (1 km a cada 2 minutos)
    int tempo = distancia * 2;

    // Exibição do resultado
    cout << tempo << " minutos" << endl;

    return 0;
}
