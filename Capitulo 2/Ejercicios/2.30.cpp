/*
Calculadora del indice de masa corporal
*/

#include <iostream>
using namespace std;

int main(){

    double kg,m,BMI;


    cout<<"Ingrese su peso en kilogramos: ";cin>>kg;
    cout<<"Ingrese su altura en metros: ";cin>>m;

    BMI=(kg)/(m*m);

    cout<<"VALORES DE BMI\nBajo peso: menos de 18.5\nNormal:    entre 18.5 y 24.9\nSobrepeso: entre 25 y 29.9\nObeso:     30 o mas"<<endl;

    if(BMI<18.5){
        cout<<"Usted tiene bajo peso"<<endl;
    }
    else if(18.5<=BMI && BMI<=24.9){
        cout<<"Usted tiene peso normal"<<endl;
    }
    else if(25<=BMI && BMI<=29.9){
        cout<<"Usted tiene sobrepeso"<<endl;
    }
    else{
        cout<<"Usted tiene obesidad"<<endl;
    }

    return 0;
}