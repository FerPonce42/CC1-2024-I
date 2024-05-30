// Fig. 9.21: Employee.cpp
// Employee class member-function definitions.

#include <iostream>
#include <sstream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition

using namespace std;

// constructor uses member initializer list to pass initializer
// values to constructors of member objects
Employee::Employee(const string& first, const string& last,
                   const Date &dateOfBirth, const Date &dateOfHire)
    : firstName{first}, // initialize firstName
      lastName{last},   // initialize lastName
      birthDate{dateOfBirth}, // initialize birthDate
      hireDate{dateOfHire} { // initialize hireDate
    // output Employee object to show when constructor is called
    cout << "Employee object constructor: "
         << firstName << ' ' << lastName << endl;
}

// print Employee object
string Employee::toString() const {
    ostringstream output;
    output << lastName << ", " << firstName << " Hired: "
           << hireDate.toString() << " Birthday: " << birthDate.toString();
    return output.str();
}

// output Employee object to show when its destructor is called
Employee::~Employee() {
    cout << "Employee object destructor: "
         << lastName << ", " << firstName << endl;
}
