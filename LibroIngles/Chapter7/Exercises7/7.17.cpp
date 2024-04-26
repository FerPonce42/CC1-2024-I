#include <iostream>
#include <array>
using namespace std;

const size_t tamanoArray{10};
int queEsEsto(const array<int, tamanoArray>&, size_t); // prototipo

int main() {
    array<int, tamanoArray> a{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int resultado{queEsEsto(a, tamanoArray)};

    cout << "El resultado es " << resultado << endl;
}

// Qué hace esta función?
int queEsEsto(const array<int, tamanoArray>& b, size_t tamaño) {
    if (tamaño == 1) { // caso base
        return b[0];
    }
    else { // paso recursivo
        return b[tamaño - 1] + queEsEsto(b, tamaño - 1);
    }
}
