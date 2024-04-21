// Fig. 7.9: fig07_09.cpp
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    // Define tamaños de los arreglos
    const size_t tamañoRespuestas{20}; // tamaño del arreglo respuestas
    const size_t tamañoFrecuencia{6}; // tamaño del arreglo frecuenciaS
    // Coloca las respuestas de la encuesta en el arreglo respuestas
    const int respuestas[tamañoRespuestas] = {
        1, 2, 5, 4, 3, 5, 2, 1, 3, 1,
        4, 3, 3, 3, 2, 3, 3, 2, 2, 5
    };
    // Inicializa los contadores de frecuencia a 0
    int frecuencia[tamañoFrecuencia] = {0};

    // Por cada respuesta, selecciona el elemento de respuestas y utiliza ese valor
    // como subíndice de frecuencia para determinar el elemento a incrementar
    for (size_t respuesta{0}; respuesta < tamañoRespuestas; ++respuesta) {
        ++frecuencia[respuestas[respuesta]];
    }
    cout << "Valoracion" << setw(12) << "Frecuencia" << endl;
    // Imprime el valor de cada elemento del arreglo
    for (size_t valoración{1}; valoración < tamañoFrecuencia; ++valoración) {
        cout << setw(6) << valoración << setw(12) << frecuencia[valoración] << endl;
    }

    return 0;
}
