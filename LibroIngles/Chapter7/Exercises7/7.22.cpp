#include <iostream>
#include <iomanip>
#include <array>

const int TAM_TABLERO = 8;

// Movimientos posibles del caballo en el tablero
const std::array<int, 8> movX = {2, 1, -1, -2, -2, -1, 1, 2};
const std::array<int, 8> movY = {1, 2, 2, 1, -1, -2, -2, -1};

// Función para imprimir el tablero
void imprimirTablero(const std::array<std::array<int, TAM_TABLERO>, TAM_TABLERO>& tablero) {
    for (int i = 0; i < TAM_TABLERO; ++i) {
        for (int j = 0; j < TAM_TABLERO; ++j) {
            std::cout << std::setw(3) << tablero[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Función para verificar si un movimiento es válido
bool esMovimientoValido(const std::array<std::array<int, TAM_TABLERO>, TAM_TABLERO>& tablero, int x, int y) {
    return (x >= 0 && x < TAM_TABLERO && y >= 0 && y < TAM_TABLERO && tablero[x][y] == -1);
}

// Función recursiva para realizar el recorrido del caballo
bool recorridoCaballo(std::array<std::array<int, TAM_TABLERO>, TAM_TABLERO>& tablero, int x, int y, int contadorMov) {
    // Caso base: si se han realizado 64 movimientos, el recorrido está completo
    if (contadorMov == TAM_TABLERO * TAM_TABLERO) {
        return true;
    }

    // Intentar todos los movimientos posibles del caballo
    for (int i = 0; i < 8; ++i) {
        int sigX = x + movX[i];
        int sigY = y + movY[i];

        if (esMovimientoValido(tablero, sigX, sigY)) {
            tablero[sigX][sigY] = contadorMov;
            if (recorridoCaballo(tablero, sigX, sigY, contadorMov + 1)) {
                return true;
            }
            // Si no conduce a una solución, deshacer el movimiento
            tablero[sigX][sigY] = -1;
        }
    }

    return false;
}

// Función principal para iniciar el recorrido del caballo
void recorridoCaballo() {
    std::array<std::array<int, TAM_TABLERO>, TAM_TABLERO> tablero;
    // Inicializar el tablero con -1 (indicando que ninguna casilla ha sido visitada)
    for (int i = 0; i < TAM_TABLERO; ++i) {
        for (int j = 0; j < TAM_TABLERO; ++j) {
            tablero[i][j] = -1;
        }
    }

    // Iniciar el recorrido desde la esquina superior izquierda (0,0)
    int inicioX = 0, inicioY = 0;
    tablero[inicioX][inicioY] = 0;

    // Si se encuentra una solución, imprimir el tablero
    if (recorridoCaballo(tablero, inicioX, inicioY, 1)) {
        std::cout << "Recorrido del caballo:\n";
        imprimirTablero(tablero);
    } else {
        std::cout << "No se encontró ningún recorrido del caballo.\n";
    }
}

int main() {
    recorridoCaballo();
    return 0;
}
