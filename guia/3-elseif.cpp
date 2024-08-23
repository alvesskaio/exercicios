#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b and a > c) {
        cout << "O maior número é: " << a << endl;
    } else if (b > c and b > a) {
        cout << "O maior número é: " << b << endl;
    } else if (c > a and c > b) {
        cout << "O maior número é: " << c << endl;
    } else {
        cout << "Dois ou mais números são iguais e são os maiores." << endl;
    }

    return 0;
}
