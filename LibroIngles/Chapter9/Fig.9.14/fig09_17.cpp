// Fig. 9.17: fig09_17.cpp
// const objects and const member functions.

#include "Time.h" // include Time class definition

int main() {
    Time wakeUp{6, 45, 0};      // non-constant object
    const Time noon{12, 0, 0};  // constant object

    // OBJECT MEMBER FUNCTION
    wakeUp.setHour(18);           // non-const non-const
    noon.setHour(12);             // const non-const
    wakeUp.getHour();             // non-const const
    noon.getMinute();             // const const
    noon.toUniversalString();     // const const
    noon.toStandardString();      // const non-const
}
