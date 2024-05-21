#include <iostream>
using namespace std;

int cuboPorValor(int); // firma de la función

int main() {
    int num{5};
    cout << "El valor original del numero es " << num;

    num = cuboPorValor(num); // pasando el número por valor a cuboPorValor
    cout << "\nEl nuevo valor del numero es " << num << endl;

    return 0; // indicar que el programa ha terminado correctamente
}

// calcula y retorna el cubo de un argumento entero
int cuboPorValor(int n) {
    return n * n * n; // variable local n al cubo
}
