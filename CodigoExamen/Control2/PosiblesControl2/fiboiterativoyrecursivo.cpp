#include <iostream>

// Función recursiva para calcular Fibonacci
int fibonacciRecursivo(int n) {
    if (n <= 1) {
        return 1; // Casos base: fibo(0) = 1 y fibo(1) = 1
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2); // Llamadas recursivas
}

// Función iterativa para calcular Fibonacci
int fibonacciIterativo(int n) {
    if (n <= 1) {
        return 1; // Casos base: fibo(0) = 1 y fibo(1) = 1
    }
    
    int fibo1 = 1;
    int fibo2 = 1;
    int fibo = 0;
    
    for (int i = 2; i <= n; ++i) {
        fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo;
    }
    
    return fibo;
}

// Función principal main
int main() {
    int numero = 10; // Número para calcular Fibonacci
    
    // Calcula Fibonacci de forma recursiva
    std::cout << "Fibonacci de " << numero << " (recursivo): " << fibonacciRecursivo(numero) << std::endl;
    
    // Calcula Fibonacci de forma iterativa
    std::cout << "Fibonacci de " << numero << " (iterativo): " << fibonacciIterativo(numero) << std::endl;
    
    return 0;
}
