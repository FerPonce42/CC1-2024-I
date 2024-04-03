/*
Escriba un programa que reciba tres enteros del teclado e imprima la suma,
promedio, producto, menor y mayor de estos numeros. El dialogo de la pantalla debe aparecer
de la siguiente manera: 
*/
#include <iostream>
using namespace std;

int main(){

    int n1,n2,n3;

    cout<<"Introduzca tres numeros distintos: ";
    cin>>n1>>n2>>n3;

    int suma=n1+n2+n3,promedio=(n1+n2+n3)/3,producto=n1*n2*n3;

    cout<<"La suma es "<<suma<<endl;
    cout<<"La promedio es "<<promedio<<endl;
    cout<<"El producto es "<<producto<<endl;

    if(n1>n3 && n2>n3){
        cout<<"El menor es "<<n3<<endl;
    } else if (n1>n2 && n3>n2){
        cout<<"El menor es "<<n2<<endl;
    }
    else{
        cout<<"El menor es "<<n1<<endl;
    }    

    if(n1<n3 && n2<n3){
        cout<<"El mayor es "<<n3<<endl;
    } else if (n1<n2 && n3<n2){
        cout<<"El mayor es "<<n2<<endl;
    }
    else{
        cout<<"El mayor es "<<n1<<endl;
    }
       
    return 0;
}