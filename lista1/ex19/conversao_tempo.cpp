#include <iostream>

using namespace std;

int main() {
    int n;
    int horas, minutos, segundos, sobra;

    // Leitura do valor de entrada
    cin >> n;

    // Calcular o número de horas
    horas = n / 3600;

    // Calcular o restante após subtrair as horas
    sobra = n % 3600;

    // Calcular o número de minutos a partir do restante
    minutos = sobra / 60;

    // Calcular o número de segundos restantes
    segundos = sobra % 60;

    // Imprimir o resultado no formato horas:minutos:segundos
    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
