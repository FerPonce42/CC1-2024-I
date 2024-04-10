/*
Indique los valores de cada una de estas variables int sin signo después de realizar el cálculo.
Supongamos que, cuando cada instrucción comienza a ejecutarse, todas las variables tienen el valor entero 5.
a) suma += x++;
b) sub-= ++x;
*/
#include <iostream>
using namespace std;

int main(){

    unsigned int suma=5;
    int sub=5;//aca le quite el unsigned, porque me da desbordamiento.
    unsigned int x=5;
//suma y postincremento
    suma +=x++;

    cout<<"a) suma: "<<suma<<endl;
    cout<<"a) x: "<<x<<endl;

//reinicio sus valores
    suma=5;
    sub=5;
    x=5;
//resta y preincremento 
    sub-= ++x;

    cout<<"b) sub: "<<sub<<endl;
    cout<<"b) x: "<<x<<endl;

    return 0;
}