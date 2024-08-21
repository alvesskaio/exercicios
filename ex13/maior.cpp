#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    // Calcular o maior entre a e b
    int maiorAB = (a + b + abs(a - b)) / 2;

    // Calcular o maior entre maiorAB e c
    int maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    cout << maior << " eh o maior" << endl;

    return 0;
}