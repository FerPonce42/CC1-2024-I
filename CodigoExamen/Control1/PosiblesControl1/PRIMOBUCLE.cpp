#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    bool esPrimo = true;

    if (numero <= 1) {
        esPrimo = false; 
    } else {
        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) {
                esPrimo = false; 
                break; 
            }
        }
    }


    if (esPrimo) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }

    return 0;
}
