/*
Escriba declaraciones C++ individuales o partes de declaraciones que hagan lo siguiente:
a) Ingrese la variable int sin signo x con cin y >>.
b) Ingrese la variable int sin signo y con cin y >>.
c) Declare la variable int sin signo i e inicialícela en 1.
d) Declarar potencia variable int unsigned e inicializarla a 1.
e) Multiplica la potencia variable por x y asigna el resultado a la potencia.
f) Preincrementar la variable i en 1.
g) Determinar si i es menor o igual que y.
h) Salida de potencia variable entera con cout y <<.
*/
#include <iostream>
using namespace std;

int main(){

    unsigned int x;
    unsigned int y;
//a
    cin>>x;
//b
    cin>>y;

//c
    unsigned int i{1};
//d
    unsigned int power{1};

//e
    power*=x;
//f
    ++i;
//g
    if(i<=y){
        return true;
    }else{
        return false;
    }
//h
    cout<<"El valor de y es: "<<y<<endl;

    return 0;
}