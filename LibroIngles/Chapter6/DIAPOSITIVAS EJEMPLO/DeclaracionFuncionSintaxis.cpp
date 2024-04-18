#include <iostream>
using namespace std;

int potencia(int base, int exponente){ //FIRMA DE LA FUNCION

    int resultado=1;
    for(int i = 0; i < exponente; i= i + 1){        //DECLARACION DE LA FUNCION
        resultado = resultado * base;
    }
    return resultado;
}


int main(){
                        //invocacion
    int tresExpCuatro = potencia(3, 4);
    cout<<"3^4 es: "<<tresExpCuatro<<endl;

    return 0;
}