#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void procesarCadenas(string arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (char &c : arr[i]) {
            if (isalpha(c)) {
                c = tolower(c);
            } else if (!isdigit(c)) {
                c = '-';
            }
        }
    }
}

int main() {
    string arr[] = {"Hola Mundo!", "123ABC456", "Ejemplo@123"};
    int size = sizeof(arr) / sizeof(arr[0]);
    procesarCadenas(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
}
