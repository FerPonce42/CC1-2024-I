#include <iostream>
#include "Date.h"
using namespace std;

int main(){

    Date fecha1(01,03,2020);
    Date fecha2(14,15,2019);//mes,dia,a;o (asi estaba mi codigo... T-T)
    Date fecha3(12,20,1500);



    fecha1.displayDate();
    fecha1.isLeapYear();

    fecha2.displayDate();
    fecha2.isLeapYear();

    fecha3.displayDate();
    fecha3.isLeapYear();

    return 0;
}