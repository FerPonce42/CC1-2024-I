#include <iostream>
#include <string>

using namespace std;

// Función recursiva para convertir una cadena a mayúsculas
void convertirMayusculasRecursivo(string& cadena, size_t pos) {
    // Caso base: si la posición actual es igual a la longitud de la cadena, terminamos la recursión
    if (pos == cadena.length()) {
        return;
    }

    // Verificar si el carácter en la posición actual es una letra minúscula
    if (cadena[pos] >= 'a' && cadena[pos] <= 'z') {
        // Convertir el carácter a mayúsculas
        cadena[pos] -= 'a' - 'A';
    }

    // Llamada recursiva para el siguiente carácter
    convertirMayusculasRecursivo(cadena, pos + 1);
}

// Función iterativa para convertir una cadena a mayúsculas
void convertirMayusculasIterativo(string& cadena) {
    // Iterar sobre la cadena
    for (char &c : cadena) {
        // Verificar si el carácter es una letra minúscula
        if (c >= 'a' && c <= 'z') {
            // Convertir el carácter a mayúsculas
            c -= 'a' - 'A';
        }
    }
}

int main() {
    string cadena;

    cout << "Ingrese una cadena: ";
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
