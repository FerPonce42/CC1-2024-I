#include <iostream>

// Función recursiva para invertir los elementos de un arreglo
void reverseArray(int arr[], int start, int end) {
    // Caso base: si el índice de inicio es mayor o igual al índice final, detenemos la recursión
    if (start >= end) {
        return;
    }

    // Intercambiamos los elementos en los índices start y end
    std::swap(arr[start], arr[end]);

    // Llamada recursiva para los elementos restantes
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    //sizeof calcula el número de elementos en el arreglo arr y lo asigna a la variable n
    // Llamamos a la función para invertir el arreglo
    reverseArray(arr, 0, n - 1);

    // Imprimimos el arreglo invertido
    std::cout << "Arreglo invertido: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
