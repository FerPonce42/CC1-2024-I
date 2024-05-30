// Fig. 9.12: Time.cpp
// Time class member-function definitions.

#include <stdexcept>
#include "Time.h" // include definition of class Time

using namespace std;

// set values of hour, minute and second
void Time::setTime(int h, int m, int s) {
    // validate hour, minute and second
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    } else {
        throw invalid_argument(
            "hour, minute and/or second was out of range");
    }
}

// return hour value
unsigned int Time::getHour() const {
    return hour;
}

// poor practice: returning a reference to a private data member.
unsigned int& Time::badSetHour(int hh) {
    if (hh >= 0 && hh < 24) {
        hour = hh;
    } else {
        throw invalid_argument("hour must be 0-23");
    }

    return hour; // dangerous reference return
}
