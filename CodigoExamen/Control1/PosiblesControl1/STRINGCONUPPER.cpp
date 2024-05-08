#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena en minúsculas: ";
    getline(cin, cadena);


    for (size_t i = 0; i < cadena.length(); ++i) {
        
        cadena[i] = toupper(cadena[i]);
    }

   
    cout << "La cadena en mayúsculas es: " << cadena << endl;

    return 0;
}
