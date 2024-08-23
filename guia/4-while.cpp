#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite números para somar (digite um número negativo para sair): " << endl;
    cin >> numero;

    while (numero >= 0) {
        soma += numero;
        cin >> numero;
    }

    cout << "A soma dos números positivos digitados é: " << soma << endl;

    return 0;
}
