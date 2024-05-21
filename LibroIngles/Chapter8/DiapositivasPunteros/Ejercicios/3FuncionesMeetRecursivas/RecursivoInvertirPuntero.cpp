#include <iostream>
using namespace std;

void inter(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void invertir(int *ini, int *fin) {
    // Condición base: si los punteros se cruzan o son iguales, no hay más elementos para invertir
    if (ini >= fin) {
        return;
    }
    // Intercambiamos los elementos apuntados por ini y fin
    inter(ini, fin);
    // Llamada recursiva: avanzamos ini y retrocedemos fin
    invertir(ini + 1, fin - 1);
}

void print(const int*arr, int tam){
    for(int i=0; i<tam ; i++,arr++){
        cout<<*arr<<endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr) / sizeof(arr[0]);

    invertir(arr, arr + tam - 1);
    
    print(arr, tam);

    return 0;
}
