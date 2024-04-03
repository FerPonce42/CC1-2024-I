/*
Escriba un programa que pida al usuario que escriba dos numeros, obtenga esos dos numeros
del usuario e imprima la suma, el producto, diferencia y cociente de los 2 numeros.
*/
#include <iostream>
using namespace std;

int main(){

    int n1,n2;

    cout<<"Por favor, introduzca 2 numeros: "<<endl;

    cin>>n1>>n2;

    int suma=n1+n2,producto=n1*n2,diferencia=n1-n2,cociente=n1/n2;

    cout<<"RESULTADOS: "<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Producto: "<<producto<<endl;
    cout<<"Diferencia: "<<diferencia<<endl;
    cout<<"Cociente: "<<cociente<<endl;

    return 0;
}