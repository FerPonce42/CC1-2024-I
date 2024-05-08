/*
Escriba un programa que reciba 2 cadenas la primera mas larga que la segunda, y cuenete cuantas veces la segunda cadena se repita en la primera cadena.
EJEMPLO:
cadena1: "aba saba caba naba"
cadena2: "aba"

imprime: 4

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena1, cadena2;

    cout << "Ingrese la primera cadena (más larga): ";
    getline(cin, cadena1);

    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);

    // Verificar que cadena2 sea más corta que cadena1
    if (cadena2.length() > cadena1.length()) {
        cout << "Error: La segunda cadena debe ser más corta que la primera." << endl;
        return 1;
    }

    int contador = 0;

    // Iterar sobre la primera cadena
    for (size_t i = 0; i <= cadena1.length() - cadena2.length(); ++i) {
        // Verificar si la subcadena de cadena1 coincide con cadena2
        if (cadena1.substr(i, cadena2.length()) == cadena2) {
            contador++;
        }
    }

    // Imprimir resultado
    cout << "La segunda cadena se repite " << contador << " veces en la primera cadena." << endl;

    return 0;
}
