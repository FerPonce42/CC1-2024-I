// Fig. 7.6: fig07_06.cpp
#include <iostream>
using namespace std;

int main() {
    const size_t arraySize{4}; // especifica el tamaño del arreglo
    int a[arraySize] = {10, 20, 30, 40}; // inicializa el arreglo

    int total{0};

    // Suma el contenido del arreglo
    for (size_t i{0}; i < arraySize; ++i) {
        total += a[i];
    }

    cout << "Total de los elementos del arreglo: " << total << endl;

    return 0;
}
