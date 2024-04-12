#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    // Iterar sobre la cadena y convertir cada carácter a mayúscula
    for (char &c : cadena) {
        // Verificar si el carácter es una letra minúscula
        if (c >= 'a' && c <= 'z') {
            // Convertir a mayúscula restando la diferencia entre las mayúsculas y minúsculas en ASCII
            c -= 'a' - 'A';
        }
    }

    // Imprimir la cadena convertida a mayúsculas
    cout << "La cadena en mayusculas es: " << cadena << endl;

    return 0;
}
