#include <iostream>
using namespace std;

// Función recursiva
int fibonacciRecursivo(int n) {
    if (n <= 1) {
        return 1;
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// Función iterativa
int fibonacciIterativo(int n) {
    if (n <= 1) {
        return 1;
    }
    int fibo1 = 1, fibo2 = 1, fiboActual;
    for (int i = 2; i <= n; ++i) {
        fiboActual = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fiboActual;
    }
    return fiboActual;
}

// Función principal para probar ambas funciones
int main() {
    int n;
    cout << "Ingrese n: ";cin >> n;
    
    cout << "Fibonacci recursivo de " << n << ": " << fibonacciRecursivo(n) << endl;
    cout << "Fibonacci iterativo de " << n << ": " << fibonacciIterativo(n) << endl;
    return 0;
}
