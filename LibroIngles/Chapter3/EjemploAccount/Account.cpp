#include <iostream>
#include <string>

#include "Account.h"
using namespace std;

int main(){
    Account miCuenta;

    cout<<"El nombre inicial de la cuenta es: "<<miCuenta.getName();

    cout<<"\nPor favor, ingresa el nombre de la cuenta: ";
    string elNombre;
    getline(cin, elNombre);
    miCuenta.setName(elNombre);

    cout<<"El nombre en el objeto miCuenta es: "
        <<miCuenta.getName()<<endl;

    return 0;
}
