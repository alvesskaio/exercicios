#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int input_dias, ano, mes, dia, sobra;

    cin >> input_dias;

    //input_dias = cin.get();

    ano = input_dias / 365;
    sobra = input_dias % 365;

    mes = sobra / 30;
    dia = sobra % 30;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}