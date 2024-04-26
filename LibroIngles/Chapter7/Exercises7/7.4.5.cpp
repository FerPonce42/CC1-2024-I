// Fig. 7.7: fig07_07.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const size_t arraySize{11};
    unsigned int n[arraySize] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

    cout << "Distribución de calificaciones:" << endl;

    // Por cada elemento del arreglo n, imprime un barra del gráfico
    for (size_t i{0}; i < arraySize; ++i) {
        // Imprime las etiquetas de las barras ("0-9:", ..., "90-99:", "100:")
        if (0 == i) {
            cout << "  0-9: ";
        } else if (10 == i) {
            cout << " 100: ";
        } else {
            cout << setw(3) << i * 10 << "-" << setw(3) << (i * 10) + 9 << ": ";
        }

        // Imprime la barra de asteriscos
        for (unsigned int stars{0}; stars < n[i]; ++stars) {
            cout << '*';
        }

        cout << endl; 
    }

    return 0;
}
