#include <iostream>
using namespace std;

int sumaRecursiva(int arr[], int tamano) {
    // Caso base: si el tamaño del arreglo es 0, la suma es 0
    if (tamano == 0) {
        return 0;
    }
    // Paso recursivo: sumar el último elemento del arreglo con la suma de los elementos restantes
    return arr[tamano - 1] + sumaRecursiva(arr, tamano - 1);
}

int sumaIterativa(int arr[], int tamano) {
    // Sumar todos los elementos del arreglo de manera iterativa
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int arreglo[] = {1, 2, 3};
    // Tamaño del arreglo
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    

    cout << "Suma recursiva: " << sumaRecursiva(arreglo, tamano) << endl;
    cout << "Suma iterativa: " << sumaIterativa(arreglo, tamano) << endl;
    
    return 0;
}
