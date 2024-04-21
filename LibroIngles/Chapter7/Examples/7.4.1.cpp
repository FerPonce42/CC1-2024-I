// Fig. 7.3: fig07_03.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaración del arreglo estático e inicialización a ceros
    int n[5] = {0}; // n es un arreglo de 5 valores int, inicializados a 0

    // Encabezado de la salida
    cout << "Elemento" << setw(10) << "Valor" << endl;

    // Imprime cada valor del arreglo
    for (size_t i = 0; i < 5; ++i) {
        cout << setw(7) << i << setw(10) << n[i] << endl;
    }

    return 0;
}
