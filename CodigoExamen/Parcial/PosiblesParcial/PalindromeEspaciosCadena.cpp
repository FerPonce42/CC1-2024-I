#include <iostream>
#include <string>
using namespace std;


string limpiarCadena(const string& cadena) {
    string limpia;
    for (char c : cadena) {
        if (isalpha(c)) {
            limpia += tolower(c);
        }
    }
    return limpia;
}

bool esPalindromo(const string& cadena) {
    
    string limpia = limpiarCadena(cadena);
    int inicio = 0;
    int fin = limpia.size() - 1;

    
    if (inicio >= fin) {
        return true;
    }

   
    if (limpia[inicio] != limpia[fin]) {
        return false;
    }

   
    return esPalindromo(limpia.substr(1, fin - 1));
}

int main() {
    string palindromo = "Anita lava la tina.";
    cout << "Cadena original: " << palindromo << endl;

    // Llamar a la función esPalindromo
    if (esPalindromo(palindromo)) {
        cout << "La cadena SI ES UN palindromo." << endl;
    } else {
        cout << "La cadena NO ES UN palindromo." << endl;
    }

    return 0;
}
