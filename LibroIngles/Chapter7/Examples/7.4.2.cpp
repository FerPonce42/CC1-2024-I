// Fig. 7.4: fig07_04.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n[5] = {32, 27, 64, 18, 95}; 

    cout << "Elemento" << setw(10) << "Valor" << endl;

    // Imprime el valor de cada elemento del arreglo
    for (size_t i = 0; i < 5; ++i) {
        cout << setw(7) << i << setw(10) << n[i] << endl;
    }

    return 0;
}
