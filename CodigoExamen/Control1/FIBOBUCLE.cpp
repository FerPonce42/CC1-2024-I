/*
Escriba un código que solicite al usuario un número y luego calcule el número de Fibonacci 
correspondiente a ese número utilizando un bucle mostrando el resultado en pantalla.
*/

#include <iostream>

using namespace std;

int main() {

    int numero;
    cout << "Ingrese un numero : ";
    cin >> numero;

    int fibo1{0}, fibo2{1},fibo3{0};

 
    for (int i = 2; i <= numero; ++i) {
        fibo3 = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo3;
    }

    
    cout << "El numero de Fibonacci de "<<numero<<" es " << fibo3 << endl;

    return 0;
}

