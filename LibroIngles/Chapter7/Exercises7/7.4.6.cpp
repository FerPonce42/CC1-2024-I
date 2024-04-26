// Fig. 7.8: fig07_08.cpp
#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
using namespace std;

int main() {
    // Utiliza el motor de generación de números aleatorios predeterminado para
    // producir valores enteros seudorandom uniformemente distribuidos de 1 a 6
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);

    const size_t tamanoArreglo{7}; // ignora el elemento cero
    unsigned int frecuencia[tamanoArreglo]{}; // inicializa a 0s

    // Lanza el dado 60,000,000 veces; utiliza el valor del dado como índice de frecuencia
    for (unsigned int lanzamiento{1}; lanzamiento <= 60'000'000; ++lanzamiento) {
        ++frecuencia[randomInt(engine)];
    }

    cout << "Cara" << setw(13) << "Frecuencia" << endl;

    // Imprime el valor de cada elemento del arreglo
    for (size_t cara{1}; cara < tamanoArreglo; ++cara) {
        cout << setw(4) << cara << setw(13) << frecuencia[cara] << endl;
    }

    return 0;
}
