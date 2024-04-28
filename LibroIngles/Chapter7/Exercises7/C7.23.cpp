#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

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
    int intentos = 0; // Contador de intentos
    steady_clock::time_point inicio = steady_clock::now(); // Tiempo de inicio

    // Realizar recorridos aleatorios del caballo hasta encontrar uno completo
    while (true) {
        int movimientos = recorridoAleatorioCaballo();
        ++intentos;

        if (movimientos == 64) { // Si el recorrido es completo (64 movimientos), salir del bucle
            steady_clock::time_point fin = steady_clock::now(); // Tiempo de finalización
            duration<double> tiempoTranscurrido = duration_cast<std::chrono::duration<double>>(fin - inicio); // Calcular el tiempo transcurrido

            cout << "Recorrido completo encontrado en " << intentos << " intentos." << endl;
            cout << "Tiempo transcurrido: " << tiempoTranscurrido.count() << " segundos." << endl;
            break;
        }
    }

    return 0;
}
