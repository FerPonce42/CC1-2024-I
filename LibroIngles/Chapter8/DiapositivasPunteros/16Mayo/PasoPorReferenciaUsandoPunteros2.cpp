#include <iostream>
using namespace std;

void cuboPorReferencia(int*); // firma de la función

int main() {
    int num{5};
    cout << "El valor original del numero es " << num;
    cuboPorReferencia(&num); // pasando la dirección de memoria del número a la función cuboPorReferencia
    cout << "\nEl nuevo valor del numero es " << num << endl;
    return 0;
}

// calcula el cubo de *nPtr; modifica la variable num en main
void cuboPorReferencia(int* nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cubo de *nPtr
}
