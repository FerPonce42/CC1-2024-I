#include <iostream>
#include <array>
#include <random>
#include <ctime>

using namespace std;

bool esSeguro(const array<int, 8>& tablero, int fila, int columna) {
    for (int i = 0; i < fila; ++i) {
        if (tablero[i] == columna || 
            tablero[i] - i == columna - fila || 
            tablero[i] + i == columna + fila) {
            return false;
        }
    }
    return true;
}

void resolverReinasHeuristico(array<int, 8>& tablero) {
    // Inicializar generador de números aleatorios
    default_random_engine generator(time(NULL));
    // Crear distribución uniforme para seleccionar posiciones aleatorias
    uniform_int_distribution<int> distribution(0, 7);

    for (int fila = 0; fila < 8; ++fila) {
        // Inicializar la columna actual con una posición aleatoria
        int columna = distribution(generator);
        // Intentar mover la reina a una posición más segura en la misma fila
        for (int intento = 0; intento < 8; ++intento) {
            if (esSeguro(tablero, fila, columna)) {
                tablero[fila] = columna;
                break;
            }
            // Si la posición no es segura, intentar con la siguiente columna
            columna = (columna + 1) % 8;
        }
    }
}

int main() {
    array<int, 8> tablero = {0};
    resolverReinasHeuristico(tablero);

    // Imprimir el tablero con las posiciones de las reinas
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (tablero[i] == j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}