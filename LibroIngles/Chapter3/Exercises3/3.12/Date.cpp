#include <iostream>
#include "Date.h"
using namespace std;

int main(){

    Date fecha1(1,31,2020);

    int mes;
    cout<<"Ingresa el mes: ";
    cin>>mes;
    fecha1.setMonth(mes);

    int dia;
    cout<<"Ingresa el dia: ";
    cin>>dia;
    fecha1.setDay(dia);

    int año;
    cout<<"Ingresa el año: ";
    cin>>año;
    fecha1.setYear(año);


    fecha1.displayDate();

    return 0;
}