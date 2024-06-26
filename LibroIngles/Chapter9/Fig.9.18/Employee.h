// Fig. 9.20: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.

#include <string>
#include "Date.h" // include Date class definition

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    Employee(const std::string&, const std::string&, const Date&, const Date&);
    std::string toString() const;
    ~Employee(); // provided to confirm destruction order

private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date hireDate; // composition: member object
};

#endif
