#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    // 4
    Date date1(3, 1, 2020);
    Date date2(15, 14, 2019); 
    Date date3(20, 12, 1500); 

   //5
    cout << "Fecha 1: ";
    date1.displayDate();
    cout<<"Fecha valida?:"<<date1.validar_dia()<<endl;
    cout<<"BICIESTO?: "<<date1.isLeapYear()<<"\n"<<endl;

    cout << "Fecha 2: ";
    date2.displayDate(); 
    cout<<"Fecha valida?: "<<date2.validar_dia()<<endl;
    cout<<"BICIESTO?: "<<date2.isLeapYear()<<"\n"<<endl;

    cout << "Fecha 3: ";
    date3.displayDate(); 
    cout<<"Fecha valida?: "<<date3.validar_dia()<<endl;
    cout<<"BICIESTO?: "<<date3.isLeapYear()<<"\n"<<endl;

    return 0;
}