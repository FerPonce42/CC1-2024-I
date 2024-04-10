/*
Escriba un programa en C++ que utilice las declaraciones del ejercicio 4.7 para calcular x elevado a y
fuerza. El programa debe tener una declaración de iteración while.
*/
#include <iostream>
using namespace std;
int main(){
    unsigned int x;
    unsigned int y;
    cin>>x;
    cin>>y;
    unsigned int i{1};
    unsigned int power{1};
    power*=x;
    ++i;
    //if(i<=y){
        //return true;
    //}else{
       // return false;
    //}
    //cout<<"El valor de y es: "<<y<<endl;


    //4.7:
    while(i<=y){
        power*=x;
        ++i;
    }
    cout<<x<<" elevado a "<<y<<" es "<<power<<endl;

    return 0;
}