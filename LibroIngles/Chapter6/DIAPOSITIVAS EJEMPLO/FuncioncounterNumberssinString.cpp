#include <iostream>
using namespace std;

// Función para contar la cantidad de números en una cadena de caracteres
int contarNumerosString(string cadena){
    int contador{0}; // Inicializamos el contador en cero
    for(int i = 0 ; i < cadena.length() ; i++){ // Iteramos sobre cada caracter de la cadena
        int val = static_cast<int>(cadena.at(i)); // Convertimos el caracter a su valor ASCII
        if(val >= 48 && val <= 59){ // Comprobamos si el valor ASCII corresponde a un número
            contador++; // Incrementamos el contador si encontramos un número
        }
    }
    return contador; // Devolvemos la cantidad total de números encontrados en la cadena
}

int main(){
    cout<<"Los numeros en esa cadena son: "<<endl;
    cout << contarNumerosString("Buenos dias2") << endl; // Llamamos a la función y mostramos el resultado
    return 0;
}
