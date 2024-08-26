#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int N, i, result;

    cin >> N;

    if (5 < N && N < 2000){
        for (i = 1; i <= N; i++){
            if (i % 2 == 0){
                result = static_cast<int>(pow(i, 2));
                cout << i << "^2 = "<< result << endl;
            }
        }
    }

    return 0;
}