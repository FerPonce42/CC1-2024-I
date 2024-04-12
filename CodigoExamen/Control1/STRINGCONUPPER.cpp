#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena en minúsculas: ";
    getline(cin, cadena);

    // Iteramos sobre cada carácter de la cadena
    for (size_t i = 0; i < cadena.length(); ++i) {
        // Convertimos cada carácter a mayúsculas usando toupper
        cadena[i] = toupper(cadena[i]);
    }

    // Imprimimos la cadena convertida a mayúsculas
    cout << "La cadena en mayúsculas es: " << cadena << endl;

    return 0;
}
