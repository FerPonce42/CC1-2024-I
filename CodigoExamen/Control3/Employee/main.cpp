#include <iostream>
#include "Employee.h"

int main(){
    Employee employeesStack[5]={
        Employee("Fernando ","Ponce "),
        Employee("Maricielo ","Luna "),
        Employee("Nicol ","Rocha "),
        Employee("Frabricio ","Estelman "),
        Employee("Alvaro ","Mamani ")
    };

    cout<<"En el STACK: "<<Employee::getCount()<<endl;

    Employee*employeesHeap=new Employee[5]{
        Employee("Fernando2 ","Ponce2 "),
        Employee("Maricielo2 ","Luna2 "),
        Employee("Nicol2 ","Rocha2 "),
        Employee("Frabricio2 ","Estelman2 "),
        Employee("Alvaro2 ","Mamani2 ")
    };
    cout<<"En el HEAP: "<<Employee::getCount()<<endl;

    delete[] employeesHeap;
    cout<<"Después de liberar: "<<Employee::getCount()<<endl;


    if(true){
        Employee* emp1= new Employee("Jordan","Ayala");
        Employee* emp2= new Employee("Leandro","Huamanga");

        cout<<"En el bloque: "<<Employee::getCount<<endl;

        delete emp1;
        delete emp2;
    }
    cout<<"Despues de liberar: "<<Employee::getCount()<<endl;


    return 0;
}