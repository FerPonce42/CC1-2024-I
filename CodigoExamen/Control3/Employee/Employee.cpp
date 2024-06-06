#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

unsigned int Employee::count=0;

Employee::Employee(const string& first, const string& last)
    : firstName(first), lastName(last) {
    ++count;
}


Employee::~Employee(){
    --count;
}

string Employee::getFirstName() const{
    return firstName;
}

string Employee::getLastName() const{
    return lastName;
}

unsigned int Employee::getCount(){
    return count;
}


  