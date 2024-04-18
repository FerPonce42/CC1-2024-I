#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    for (char &c : cadena) {
      
        if (c >= 'a' && c <= 'z') {
            c -= 'a' - 'A';
        }
    }


    cout << "La cadena en mayusculas es: " << cadena << endl;

    return 0;
}
