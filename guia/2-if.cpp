#include <iostream>
using namespace std;


int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if (a > b and b < c){
        cout << "O maior número é:" << a << endl;
    } else if (b > c){
       cout << "O maior número é:" << b << endl;
    }else{
       cout << "O maior número é:" << c << endl;
    }

}