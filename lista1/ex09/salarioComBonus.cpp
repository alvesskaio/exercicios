#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    string nome_func;
    double salario_fixo, total_vendas_func,total;

    cin >> nome_func >> salario_fixo >> total_vendas_func;

    total = salario_fixo + (total_vendas_func * 0.15);

    cout << fixed <<setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

    return 0;
}