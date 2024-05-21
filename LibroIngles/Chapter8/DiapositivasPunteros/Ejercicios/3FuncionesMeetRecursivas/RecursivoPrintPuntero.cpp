#include <iostream>
using namespace std;

void print(const int *arr, int tam) {
    // Condición base: si el tamaño es 0, no hay elementos que imprimir, así que salimos de la función
    if (tam == 0) {
        return;
    }
    // Imprimimos el primer elemento del arreglo
    cout << *arr << endl;
    // Llamada recursiva: llamamos a print con el resto del arreglo
    print(arr + 1, tam - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    print(arr, 5);

    return 0;
}
