#include <string>
#include <iostream>
using namespace std;

class Account {

public:
    // Constructor
    Account(string accountName, int initialBalance)
        : name(accountName), balance(0) { 
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    // Método para depositar
    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance += depositAmount;
        }
    }

    // Método para obtener el balance
    int getBalance() const {
        return balance;
    }

    // Método para establecer el nombre
    void setName(string accountName) {
        name = accountName;
    }

    // Método para obtener el nombre de la cuenta
    string getName() const {
        return name;
    }

    // Método para retirar
    int withdraw(int withdrawal) {
        if (balance < withdrawal) {
            cout << "Withdrawal amount exceeded account balance. " << endl;
            return 0; // Devolver 0 si el retiro no es posible
        }
        else {
            balance -= withdrawal;
            return withdrawal; // Devolver la cantidad retirada
        }
    }

private:
    string name;
    int balance;
};
