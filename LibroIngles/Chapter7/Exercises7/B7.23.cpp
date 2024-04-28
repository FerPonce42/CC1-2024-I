#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// Función para verificar si un movimiento del caballo es válido en el tablero de ajedrez
bool esMovimientoValido(int x, int y, int tablero[8][8]) {
    return (x >= 0 && y >= 0 && x < 8 && y < 8 && tablero[x][y] == 0);
}

// Función para realizar un recorrido aleatorio del caballo en el tablero de ajedrez
int recorridoAleatorioCaballo() {
    int tablero[8][8] = {0}; // Inicializar el tablero con todas las posiciones en 0
    int movimientosX[8] = {2, 1, -1, -2, -2, -1, 1, 2}; // Movimientos horizontales del caballo
    int movimientosY[8] = {1, 2, 2, 1, -1, -2, -2, -1}; // Movimientos verticales del caballo

    // Inicializar la semilla para la generación de números aleatorios
    srand(time(nullptr));

    // Seleccionar una posición inicial aleatoria para el caballo
    int x = rand() % 8;
    int y = rand() % 8;
    int movimientosRealizados = 0; // Contador de movimientos realizados

    // Realizar movimientos aleatorios del caballo hasta que no pueda moverse más
    while (true) {
        tablero[x][y] = ++movimientosRealizados; // Marcar la posición actual del caballo

        bool movimientosPosibles = false; // Bandera para verificar si hay movimientos posibles

        // Intentar realizar movimientos aleatorios
        for (int i = 0; i < 8; ++i) {
            int nuevaX = x + movimientosX[i];
            int nuevaY = y + movimientosY[i];

            if (esMovimientoValido(nuevaX, nuevaY, tablero)) {
                x = nuevaX;
                y = nuevaY;
                movimientosPosibles = true;
                break;
            }
        }

        // Si no hay movimientos posibles, salir del bucle
        if (!movimientosPosibles) {
            break;
        }
    }

    // Retornar el número de movimientos realizados en este recorrido
    return movimientosRealizados;
}

int main() {
    vector<int> movimientosPorRecorrido(64, 0); // Vector para almacenar el número de movimientos por recorrido

    // Realizar 1000 recorridos aleatorios y contar el número de movimientos en cada uno
    for (int i = 0; i < 1000; ++i) {
        int movimientos = recorridoAleatorioCaballo();
        ++movimientosPorRecorrido[movimientos - 1]; // Incrementar el contador correspondiente
    }

    // Mostrar la cantidad de recorridos de cada longitud en un formato tabular
    cout << "Cantidad de recorridos por longitud:" << endl;
    cout << "Longitud\tCantidad" << endl;
    for (int i = 0; i < 64; ++i) {
        if (movimientosPorRecorrido[i] > 0) {
            cout << i + 1 << "\t\t" << movimientosPorRecorrido[i] << endl;
        }
    }

    return 0;
}
