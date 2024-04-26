#include <iostream>

// Función iterativa para invertir los elementos de un arreglo
void reverseArray(int arr[], int size) {
    int start = 0; // Índice de inicio del arreglo
    int end = size - 1; // Índice final del arreglo

    // Mientras el índice de inicio sea menor que el índice final, intercambiamos los elementos y avanzamos los índices
    while (start < end) {
        // Intercambiamos los elementos en los índices start y end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Movemos el índice de inicio hacia adelante y el índice de fin hacia atrás
        ++start;
        --end;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Llamamos a la función para invertir el arreglo
    reverseArray(arr, n);

    // Imprimimos el arreglo invertido
    std::cout << "Arreglo invertido: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}