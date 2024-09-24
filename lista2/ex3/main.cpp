#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Classe para representar um cliente
class Cliente {
public:
    string nome, cpf;
    double saldo;

    Cliente(string nome, string cpf, double saldo = 0.0) : nome(nome), cpf(cpf), saldo(saldo) {}

    void depositar(double valor) {
        saldo += valor;
        cout << "Depósito de R$ " << valor << " realizado!\n";
    }

    bool sacar(double valor) {
        if (valor > saldo) {
            cout << "Saldo insuficiente.\n";
            return false;
        }
        saldo -= valor;
        cout << "Saque de R$ " << valor << " realizado!\n";
        return true;
    }

    void mostrarSaldo() const {
        cout << "Saldo de " << nome << ": R$ " << saldo << endl;
    }
};

// Função para encontrar cliente por CPF
int encontrarCliente(const vector<Cliente>& clientes, const string& cpf) {
    for (int i = 0; i < clientes.size(); ++i) {
        if (clientes[i].cpf == cpf)
            return i;
    }
    return -1;
}

// Função para adicionar um cliente
void adicionarCliente(vector<Cliente>& clientes) {
    string nome, cpf;
    cout << "Nome: ";
    cin.ignore();  // Limpa o buffer de entrada
    getline(cin, nome);
    cout << "CPF: ";
    getline(cin, cpf);

    if (encontrarCliente(clientes, cpf) != -1) {
        cout << "Cliente com este CPF já existe.\n";
        return;
    }

    clientes.push_back(Cliente(nome, cpf));
    cout << "Cliente adicionado com sucesso!\n";
}

// Função para realizar depósito
void realizarDeposito(vector<Cliente>& clientes) {
    string cpf;
    double valor;
    cout << "CPF: ";
    cin.ignore();  // Limpa o buffer de entrada
    getline(cin, cpf);

    int indice = encontrarCliente(clientes, cpf);
    if (indice == -1) {
        cout << "Cliente não encontrado.\n";
        return;
    }

    cout << "Valor do depósito: R$ ";
    cin >> valor;
    clientes[indice].depositar(valor);
}

// Função para realizar saque
void realizarSaque(vector<Cliente>& clientes) {
    string cpf;
    double valor;
    cout << "CPF: ";
    cin.ignore();  // Limpa o buffer de entrada
    getline(cin, cpf);

    int indice = encontrarCliente(clientes, cpf);
    if (indice == -1) {
        cout << "Cliente nao encontrado.\n";
        return;
    }

    cout << "Valor do saque: R$ ";
    cin >> valor;
    clientes[indice].sacar(valor);
}

// Função para consultar saldo
void consultarSaldo(const vector<Cliente>& clientes) {
    string cpf;
    cout << "CPF: ";
    cin.ignore();  // Limpa o buffer de entrada
    getline(cin, cpf);

    int indice = encontrarCliente(clientes, cpf);
    if (indice == -1) {
        cout << "Cliente nao encontrado.\n";
        return;
    }

    clientes[indice].mostrarSaldo();
}

int main() {
    vector<Cliente> clientes;
    int opcao;

    do {
        cout << "\n=== Sistema Bancario ===\n";
        cout << "1. Adicionar cliente\n";
        cout << "2. Realizar deposito\n";
        cout << "3. Realizar saque\n";
        cout << "4. Consultar saldo\n";
        cout << "5. Sair\n";
        cout << "Escolha uma opçao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: adicionarCliente(clientes); break;
            case 2: realizarDeposito(clientes); break;
            case 3: realizarSaque(clientes); break;
            case 4: consultarSaldo(clientes); break;
            case 5: cout << "Encerrando o sistema...\n"; break;
            default: cout << "Opção invalida.\n";
        }
    } while (opcao != 5);

    return 0;
}
