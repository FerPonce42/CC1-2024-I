/*
Escriba un programa que lea cinco enteros, determine e imprima  los enteros
mayor y menor en el grupo.*/

#include <iostream>
using namespace std;

int main(){

    int n1,n2,n3,n4,n5;

    cout<<"Introduzca los cinco enteros: ";cin>>n1>>n2>>n3>>n4>>n5;
//EN EL CASO DE MAYOR
    if(n1<n5 && n2<n5 && n3<n5 && n4<n5){
        cout<<"El mayor del grupo es "<<n5<<endl;
    }
    else if(n1<n4 && n2<n4 && n3<n4 && n5<n4){
        cout<<"El mayor del grupo es "<<n4<<endl;
    }
    else if(n1<n3 && n2<n3 && n5<n3 && n4<n3){
        cout<<"El mayor del grupo es "<<n3<<endl;
    }
    else if(n1<n2 && n5<n2 && n3<n2 && n4<n2){
        cout<<"El mayor del grupo es "<<n2<<endl;
    }
    else if(n5<n1 && n5<n1 && n3<n1 && n4<n1){
        cout<<"El mayor del grupo es "<<n1<<endl;
    }

//EN EL CASO MENOR  

    if(n5<n1 && n5<n2 && n5<n3 && n5<n4){
        cout<<"El menor del grupo es "<<n5<<endl;
    }
    else if(n4<n1 && n4<n2 && n4<n3 && n4<n5){
        cout<<"El menor del grupo es "<<n4<<endl;
    }
    else if(n3<n1 && n3<n2 && n3<n4 && n3<n5){
        cout<<"El menor del grupo es "<<n3<<endl;
    }
    else if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
        cout<<"El menor del grupo es "<<n2<<endl;
    }
    else if(n1<n5 && n1<n2 && n1<n3 && n1<n4){
        cout<<"El menor del grupo es "<<n1<<endl;
    }
    return 0;
}