#include <iostream>
#include <iomanip>
#include <array>

const int TAM_TABLERO = 8;

// Movimientos posibles del caballo en el tablero(Recuerda que se mueve en L, asi que date una idea)
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

// Verificar su el movimiento ES VALIDO:!?!!
bool esMovimientoValido(const std::array<std::array<int, TAM_TABLERO>, TAM_TABLERO>& tablero, int x, int y) {
    return (x >= 0 && x < TAM_TABLERO && y >= 0 && y < TAM_TABLERO && tablero[x][y] == -1);
}

// RECORRIDO DEL CABALLO DE FORMA RECURSIVA
bool recorridoCaballo(std::array<std::array<int, TAM_TABLERO>, TAM_TABLERO>& tablero, int x, int y, int contadorMov) {
    // CASO BASE: Si se hizo 64 movi. el recorrido ta COMPLETO
    if (contadorMov == TAM_TABLERO * TAM_TABLERO) {
        return true;
    }

    // Iterar en todos los movimientos que hará el caballito
    for (int i = 0; i < 8; ++i) {
        int sigX = x + movX[i];
        int sigY = y + movY[i];

        if (esMovimientoValido(tablero, sigX, sigY)) {
            tablero[sigX][sigY] = contadorMov;
            if (recorridoCaballo(tablero, sigX, sigY, contadorMov + 1)) {
                return true;
            }
            // Si no hay solucion, deshacer el movimiento
            tablero[sigX][sigY] = -1;
        }
    }

    return false;
}

// INICIAR EL RECORRIDO DEL CABALLO L
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

    // SI HAY SOLUCION, IMPRIME EN TABLERO.
    if (recorridoCaballo(tablero, inicioX, inicioY, 1)) {
        std::cout << "Recorrido del caballo:\n";
        imprimirTablero(tablero);
    } else {
        std::cout << "No se encontró ningún recorrido del caballo.\n";
    }
}

int main() {
    recorridoCaballo();//LLAMAS A LA FUNCION Y FIN.
    return 0;
}
