#include <iostream>
using namespace std;

//Sintaxe for (incio; fim; passo)

int main(){
    for(int i = 0; i < 10; i++){
        cout << i << endl;
        if(i%2==0){
            break;
        }
    }
    return 0;
}