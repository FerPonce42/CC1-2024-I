#include <iostream>
#include <string>
using namespace std;

class Date{

    public:
        explicit Date(int d, int m, int y) : day{d} {
            if (m >= 1 && m <= 12) {
                month = m;
            }
    //1.
            if (y >= 1900 && y <= 2050) {
                year = y;
            } else {
                year = 1900; 
            }
        }
    // 2.
        bool isLeapYear() const {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return true; // Si es 
            } else {
                return false; // No es
            }
        }

//3.
        bool validar_dia() const {
            if (month == 2) { // Febrero
                if (isLeapYear()) { // Año bisiesto
                    return (day >= 1 && day <= 29); // Febrero tiene 29 días en años bisiestos
                } else {
                    return (day >= 1 && day <= 28); // Febrero tiene 28 días en años no bisiestos
                }
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                return (day >= 1 && day <= 30); // Meses con 30 días
            } else {
                return (day >= 1 && day <= 31); // Resto de los meses
            }
        }


        void setDay(int d){
            day = d;
        }

        void setMonth(int m){
            if(m >= 1 && m <= 12){
                month=m;
            }
        }

        void setYear(int y){
            year=y;
        }

        int getDay()const{
            return day;
        }

        int getMonth()const{
            return month;
        }

        int getYear()const{
            return year;
        }

        void displayDate()const{
            cout<<day<<" / "<<month<<" / "<<year<<endl;
        }


    private:
        int day;
        int month{1};
        int year;

};