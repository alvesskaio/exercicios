#include <iostream>
using namespace std;

// Usar com arquivos externos
int main (){
    int x,y;

    while(true){
        if(cin >> x >> y){ // Faz a leitura até achar o endfile
            cout << "Valores iguais, fim do programa!" << endl;
            break;
        }
    }
}

/*
    exemplo : ./ex3 < in.txt > teste.txt
*/