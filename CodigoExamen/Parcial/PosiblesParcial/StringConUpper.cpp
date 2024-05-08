#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void convertirMayusculasRecursivo(string& cadena, size_t pos) {
    // Caso base: si la posición actual es igual a la longitud de la cadena, terminamos la recursión
    if (pos == cadena.length()) {
        return;
    }

    // Convertir el carácter en la posición actual a mayúsculas
    cadena[pos] = toupper(cadena[pos]);

    // Llamada recursiva para el siguiente carácter
    convertirMayusculasRecursivo(cadena, pos + 1);
}

// Función iterativa para convertir una cadena en minúsculas a mayúsculas
void convertirMayusculasIterativo(string& cadena) {
    // Iterar sobre la cadena
    for (size_t i = 0; i < cadena.length(); ++i) {
        // Convertir el carácter en la posición actual a mayúsculas
        cadena[i] = toupper(cadena[i]);
    }
}

int main() {
    string cadena;

    cout << "Ingrese una cadena en minúsculas: ";
    getline(cin, cadena);

    // Llamada a la función recursiva
    convertirMayusculasRecursivo(cadena, 0);

    // Imprimir resultado
    cout << "La cadena en mayúsculas es (recursivo): " << cadena << endl;

    // Llamada a la función iterativa
    convertirMayusculasIterativo(cadena);

    // Imprimir resultado
    cout << "La cadena en mayúsculas es (iterativo): " << cadena << endl;

    return 0;
}
