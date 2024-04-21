// Fig. 7.5: fig07_05.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const size_t arraySize{5}; // variable constante para especificar el tamaño del arreglo
    int values[arraySize]; // inicializar en la declaración

    // Inicializa los valores del arreglo con los enteros pares del 2 al 10
    for (size_t i{0}; i < arraySize; ++i) {
        values[i] = 2 + 2 * i;
    }

    // Encabezado de la salida
    cout << "Elemento" << setw(10) << "Valor" << endl;

    // Imprime el contenido del arreglo en formato tabular
    for (size_t j{0}; j < arraySize; ++j) {
        cout << setw(7) << j << setw(10) << values[j] << endl;
    }

    return 0;
}
