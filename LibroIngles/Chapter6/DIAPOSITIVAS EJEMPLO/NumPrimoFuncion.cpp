#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false; // Los números menores o iguales a 1 no son primos
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printNPrimos(int n) {
    int contador{0};
    int numero{2}; // CONTAR DESDE 2 EN ADELANTE (Se omite 1 por no ser primo)
    while (contador < n) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }
    cout << endl;
}

int main() {
    int numero;

    cout << "Introduce el número: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << numero << " ES PRIMO" << endl;
    } else {
        cout << numero << " NO ES PRIMO" << endl;
    }

    // N PRIMOS
    int N;
    cout << "Introduce la cantidad de números primos: ";cin >> N;
    cout << "Los primeros " << N << " numeros primos son: ";
    printNPrimos(N);

    return 0;
}
