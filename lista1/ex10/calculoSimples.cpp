#include <iostream>
#include <iomanip>

using namespace std;

int main (){

        //Criação de variáveis
        int cod_peca_1, n_peca_1, cod_peca_2, n_peca_2;
        double valor_unit_1, valor_unit_2, total_pagar;

        //Input de valores
        cin >> cod_peca_1 >> n_peca_1 >> valor_unit_1;
        cin >> cod_peca_2 >> n_peca_2 >> valor_unit_2;

        //Calculo para saber o total a pagar
        total_pagar = (n_peca_1 * valor_unit_1) + (n_peca_2 * valor_unit_2);

        cout << fixed << setprecision(2);
        cout << "VALOR A PAGAR: R$ " << total_pagar << endl;

        return 0;
}
















