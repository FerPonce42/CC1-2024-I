/*
3.12 (Clase Cuenta) Cree una clase llamada Cuenta que podría ser utilizada por un banco para representar las
cuentas bancarias de sus clientes. Incluya un miembro de datos de tipo int para representar el saldo de la cuenta.
Proporcione un constructor que reciba un saldo inicial y lo utilice para inicializar el dato miembro. 

1. El constructor debe validar el saldo inicial para asegurar que sea mayor o igual que 0. De no ser así, establezca el saldo en O y muestre un mensaje de
error, indicando que el saldo inicial era inválido. Proporcione tres funciones miembro. La función miembro abonar
debe agregar un monto al saldo actual. La función miembro cargar deberá retirar dinero del objeto Cuenta y
asegurarse que el monto a cargar no exceda el saldo de Cuenta. Si lo hace, el saldo debe permanecer sin cambio y la
función debe imprimir un mensaje que indique "El monto a cargar excede el saldo de 1a cuenta." La función
miembro obtenerSaldo debe devolver el saldo actual. Cree un programa que cree dos objetos Cuenta y evalúe las
funciones miembro de la clase Cuenta.
*/

#include <iostream>
#include "Cuenta.h"
using namespace std;

int main(){
    
    Cuenta cuenta1(0); //0
    cout<<"SALDO ACTUAL S/."<<cuenta1.obtenersaldo()<<endl;


    cuenta1.abonar(500); //0+500
    cout<<"SALDO TRAS DEPOSITO: S/."<<cuenta1.obtenersaldo()<<endl;

    cuenta1.cargar(200); //500-200
    cout<<"SALDO TRAS RETIRO: S/."<<cuenta1.obtenersaldo()<<endl;

    

    return 0;
}