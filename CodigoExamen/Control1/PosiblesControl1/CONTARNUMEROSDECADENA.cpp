#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    int contador = 0;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    // Recorre cada carácter de la cadena
    for (int i = 0; i < cadena.length(); i++) {
        // Verifica si el carácter es un número
        if (cadena[i] >= '0' && cadena[i] <= '9') {
            contador++;
        }
    }

    cout << "La cadena tiene " << contador << " numeros." << endl;

    return 0;
}
