#include <iostream>
#include <iomanip>  // Para definir a precisão da saída

using namespace std;

int main() {
    int tempo, velocidade;

    // Leitura dos valores de tempo e velocidade
    cin >> tempo >> velocidade;

    // Cálculo da distância percorrida
    int distancia = tempo * velocidade;

    // Cálculo da quantidade de litros necessários
    double litros = distancia / 12.0;

    // Exibição do resultado com 3 casas decimais
    cout << fixed << setprecision(3);
    cout << litros << " litros" << endl;

    return 0;
}
