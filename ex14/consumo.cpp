#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double  distancia_total,total_comb_gasto, resultado;

    cin >> distancia_total >> total_comb_gasto;

    resultado = distancia_total/total_comb_gasto;

    cout << fixed << setprecision(3);
    cout << resultado << " km/l";

    return 0;
}




