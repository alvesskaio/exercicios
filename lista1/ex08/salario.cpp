#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int NUMBER, horas;
    double remuneracao ,salario;
    cin >> NUMBER >> horas >> remuneracao;

    salario = remuneracao * horas;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << NUMBER << endl;
    cout << "SALARY = U$ " <<  salario << endl;

    return 0;
}












































