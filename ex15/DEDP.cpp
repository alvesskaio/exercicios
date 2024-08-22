#include <iostream>
#include <cmath>        // Para usar a função sqrt (raiz quadrada)
#include <iomanip>      // Para definir a precisão da saída

using namespace std;

int main() {
    // Declaração das variáveis para os pontos
    double x1, y1, x2, y2;

    // Leitura dos valores de x1, y1, x2, y2
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    // Cálculo da distância usando a fórmula da distância euclidiana
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Configurando a precisão da saída para 4 casas decimais
    cout << fixed << setprecision(4);

    // Exibindo o resultado
    cout << distancia << endl;

    return 0;
}
