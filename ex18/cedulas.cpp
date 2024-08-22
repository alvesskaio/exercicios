#include <iostream>
#include <iomanip>


using namespace std;

int main(){

    int num, valor_original;
    int c100, c50, c20, c10, c5, c2, c1;

    cout << "Digite o valor:";
    cin >> num;

    valor_original = num;

    c100 = num / 100;
    num = num % 100;

    c50  = num / 50;
    num = num % 50;

    c20  = num / 20;
    num =  num % 20;

    c10  = num / 10;
    num =  num % 10;

    c5   = num / 5;
    num =  num % 5;

    c2   = num / 2;
    num =  num %  2;

    c1   = num ;

    cout << fixed << setprecision(2);
    cout << valor_original << endl;
    cout << c100  << " nota(s) de R$ 100,00" << endl;
    cout << c50   << " nota(s) de R$ 50,00"  << endl;
    cout << c20   << " nota(s) de R$ 20,00"  << endl;
    cout << c10   << " nota(s) de R$ 10,00"  << endl;
    cout << c5    << " nota(s) de R$ 5,00"   << endl;
    cout << c2    << " nota(s) de R$ 2,00"   << endl;
    cout << c1    << " nota(s) de R$ 1,00"   << endl;

    return 0;
}













