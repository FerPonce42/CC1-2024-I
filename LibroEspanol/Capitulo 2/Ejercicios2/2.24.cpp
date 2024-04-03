/*
Escriba un programa que lea un entero, determine e impra si es par o impar.
*/

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Ingrese el numero: ";cin>>numero;

    if(numero%2==0){
        cout<<numero <<" ES PAR"<<endl;
    }
    else{
        cout<<numero <<" ES IMPAR"<<endl;
    }
}