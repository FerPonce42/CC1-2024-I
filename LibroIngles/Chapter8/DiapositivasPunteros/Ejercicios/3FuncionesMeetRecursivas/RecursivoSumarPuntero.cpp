#include <iostream>
using namespace std;

int sum(const int *arr, int tam) {
    // Condición base: si el tamaño es 0, la suma es 0
    if (tam == 0) {
        return 0;
    }
    // Llamada recursiva: sumamos el primer elemento y llamamos a sum con el resto del arreglo
    return *arr + sum(arr + 1, tam - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << sum(arr, 5) << endl;

    return 0;
}
