#include <iostream>

using namespace std;

class conta{
    public:
    string nome, cpf;
    int n_conta, agencia;
    double saldo;

    conta(string nome, string cpf, int n_conta, int agencia, double saldo){
        this -> nome = nome;
        this -> cpf = cpf;
        this -> n_conta = n_conta;
        this -> agencia = agencia;
        this -> saldo = saldo;
    };

    double depositar(int valor){
        return this -> saldo += valor;
    }
    double creditar(int valor){
        if (this -> saldo < valor){
            cout << "Saldo insuficiente." << endl;
            return this -> saldo;
        }
        return this -> saldo -= valor;
    }

};

int main(){

    conta conta_01("Kaio", "16137807703", 01, 1234, 0);


    cout << "Depositar - " << conta_01.depositar(1000) << endl;
    cout << "Creditar  - " << conta_01.creditar(500) << endl;

    return 0;
}

