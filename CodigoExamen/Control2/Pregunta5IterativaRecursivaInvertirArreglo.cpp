#include <iostream>
using namespace std;

void invertirArregloIterativo(int arr[], int tamano) {
    int inicio = 0; 
    int fin = tamano - 1; 

    // Mientras el índice de inicio sea menor que el índice final,
    // intercambiamos los elementos y avanzamos los índices
    while (inicio < fin) {
        // Intercambiamos los elementos en los índices inicio y fin
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        
        // Movemos el índice de inicio hacia adelante y el índice de fin hacia atrás
        ++inicio;
        --fin;
    }
}

void invertirArregloRecursivo(int arr[], int inicio, int fin) {
    // Caso base: si el índice de inicio es mayor o igual 
    // al índice final, detenemos la recursión
    if (inicio >= fin) {
        return;
    }

    // Intercambiamos los elementos en los índices inicio y fin
    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;

    // Llamada recursiva para los elementos restantes
    invertirArregloRecursivo(arr, inicio + 1, fin - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Iterativa
    invertirArregloIterativo(arr, n);
    cout << "Arreglo invertido (iterativo): ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Restaurar el arreglo int arr[] = {1, 2, 3, 4, 5};
    invertirArregloIterativo(arr, n);

    // Recursiva
    invertirArregloRecursivo(arr, 0, n - 1);
    cout << "Arreglo invertido (recursivo): ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
