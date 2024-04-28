#include <iostream>
#include <string>

using namespace std;

// Función auxiliar para eliminar caracteres no alfabéticos y convertir letras a minúsculas
string limpiarCadena(const string& cadena) {
    string limpia;
    for (char c : cadena) {
        if (isalpha(c)) {
            limpia += tolower(c);
        }
    }
    return limpia;
}

// Función recursiva para verificar si una cadena es un palíndromo
bool esPalindromo(const string& cadena) {
    // Obtener una versión limpia de la cadena
    string limpia = limpiarCadena(cadena);
    int inicio = 0;
    int fin = limpia.size() - 1;

    // Caso base: cuando la subcadena tiene menos de dos caracteres
    if (inicio >= fin) {
        return true;
    }

    // Si los caracteres en los extremos no coinciden, no es un palíndromo
    if (limpia[inicio] != limpia[fin]) {
        return false;
    }

    // Llamada recursiva con los siguientes caracteres en la cadena
    return esPalindromo(limpia.substr(1, fin - 1));
}

int main() {
    string frase = "Anita lava la tina.";

    // Llamar a la función esPalindromo
    if (esPalindromo(frase)) {
        cout << "La cadena SI ES UN palindromo." << endl;
    } else {
        cout << "La cadena NO ES UN palindromo." << endl;
    }

    return 0;
}
