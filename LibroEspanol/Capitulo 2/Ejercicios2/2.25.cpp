/*
Escriba un programa que lea dos enteros, determina e imprima si el primero es multiplo del segundo.
*/

#include <iostream>
using namespace std;

int main(){

    int n1,n2;

    cout<<"DOS ENTEROS: ";cin>>n1>>n2;

    if(n1%n2==0){
        cout<<n1<<" es multiplo de "<<n2<<endl;
    }
    else{
        cout<<n1<<" no es multiplo de "<<n2<<endl;
    }   



    return 0;
}