#include <iostream>
using namespace std;


int sumarArregloRecursivo(int arr[], int n) {

    if (n == 0) {
        return 0;
    }
 
    return arr[n - 1] + sumarArregloRecursivo(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);


    int suma = sumarArregloRecursivo(arr, n);

    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}
