/*
escribe un programa que pida una cadena y cuente cuantod numeros tiene dicha cadena
*/

#include<iostream>
#include <string>
using namespace std;

int main(){

    string cad;
    cout<<"Ingrese su cadena:  ";
    getline(cin,cad);

    
    int counter{0};
    for(int i= 0; i < cad.size() ; i++ ){
        int val=static_cast<int> (cad.at(i));
        if(val>= 48 && val<=59)
            counter++;
        
    }
    cout<< counter << endl; 
    return 0;
    
}