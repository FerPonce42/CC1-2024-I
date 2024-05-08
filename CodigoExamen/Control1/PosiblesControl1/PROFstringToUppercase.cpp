/*
Implemente un programa que pida por teclado una cadena considerando espacios, y convierta dica cadena a mayusculas

CON UPPER Y SIN UPPER
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string cad;
    cout<<"Ingrese su cadena en minuscula: ";
    getline(cin,cad);

    
    char c;
    for(int i= 0; i<cad.size() ; i++ ){
        c = cad.at(i);
        cad.at(i);
        int val=static_cast<int>(c);//static cast = encontrar valor numerico.
        if(val>= 97 && val<=122)
            cad.at(i)=c-32;
        
    }
    cout<< cad << endl; 
    return 0;
}