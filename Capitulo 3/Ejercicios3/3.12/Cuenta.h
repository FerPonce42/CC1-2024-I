#include <iostream>
#include <string> 

using namespace std;

class Cuenta{
public:
    explicit Cuenta(int);
    void abonar(int);
    void cargar(int);
    string obtenersaldo();
private:
    int saldo;
};

Cuenta::Cuenta(int dinero){
    saldo = dinero;
    if (dinero < 0) {
        saldo = 0;
        cout << "Saldo inicial es inválido." << endl;
    }
}

void Cuenta::abonar(int dinero){    
    saldo += dinero;
}

void Cuenta::cargar(int dinero){
    if(saldo<dinero){
        cout<<"El monto a retirar excede al que existe en la cuenta."<<endl;
    }else{
        saldo-=dinero;
    }
    
}

string Cuenta::obtenersaldo(){
    return to_string(saldo);
}
