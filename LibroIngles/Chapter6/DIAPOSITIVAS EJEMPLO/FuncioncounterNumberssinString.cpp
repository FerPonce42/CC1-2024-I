#include <iostream>
using namespace std;

int contarNumerosString(string cadena){
    int contador{0};
    for(int i = 0 ; i<cadena.length() ; i++){
        int val= static_cast<int> (cadena.at(i));
        if(val>=48 && val<=59){
            contador++;
        }
    }
    return contador;
}

int main(){
    cout<<"Los numeros en esa cadena son: "<<endl;
    cout << contarNumerosString("Buenos dias2") << endl;
    return 0;
}
