#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void invertirArregloRecursivo(int arr[], int inicio, int fin) {
    if (inicio >= fin) {
        return;
    }
    
    intercambiar(arr[inicio], arr[fin]);
    

    invertirArregloRecursivo(arr, inicio + 1, fin - 1);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    invertirArregloRecursivo(arr, 0, n - 1);

    cout << "Arreglo invertido: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
