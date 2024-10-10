#include <iostream>
#include <vector>
#include <string>

using namespace std;

class conta{
    public:
        string nome_cliente, cpf_cliente, end_cliente, tel_cliente;
        double saldo;

    conta(string nome_cliente, string cpf_cliente, string end_cliente, string tel_cliente, double saldo){
        this -> nome_cliente = nome_cliente;
        this -> cpf_cliente = cpf_cliente;
        this -> end_cliente = end_cliente;
        this -> tel_cliente = tel_cliente;
        this -> saldo = saldo;
    }

    void saque(double valor){
        if (valor > this->saldo){
            cout << "Saldo insuficiente" << endl;
        } else{
            this->saldo -= valor;
        }
    }

    void deposito(double valor){
        this->saldo += valor;
    }

    string mostra_saldo(){
        return "Seu saldo: " + to_string(this->saldo);
    }

};

int main(){

    conta conta_01("Kaio Alves", "161.378.077-03","Avenida guedes", "21307959", 500);

    conta_01.saldo = 100;
    cout << conta_01.mostra_saldo() << endl;


    return 0;
}
