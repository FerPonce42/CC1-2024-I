#include <iostream>
#include "Student.h"
using namespace std;

int main(){

    Student estudiante1("Estudiante",00);
    
    cout<<"\nIngrese su nombre: ";
    string name;cin>>name;
    estudiante1.setName(name);

    cout<<estudiante1.getName()<<endl;
    cout<<"\nIngrese su edad: ";
    int age;cin>>age;
    estudiante1.setAge(age);

    cout<<estudiante1.getAge()<<endl;

    //vericar edad
    cout<<"\nEs mayor de 18: ";
    cout<<estudiante1.isOlder(age)<<endl;

    return 0;
}