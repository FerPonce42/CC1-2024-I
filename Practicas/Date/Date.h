#include <iostream>
#include <string>
using namespace std;

class Date{

    public:

        explicit Date(int month, int day, int year){

            if(month<13){
                month;
            }else{
                month=1;
            }
/////1?
            if(1900<year && year<2050){
                year=year;
            }else{
                year=1900;
            }
        }
//2
        bool isLeapYear() const{
            if(year/4){
                return true;//Si es biciesto
            }else{
                return false;//No es biciesto
            }
        }

        void setMonth(int mes){
            if(mes>=1 && mes<=12){
                month=mes;
            }

        }

        void setDay(int dia){
            day=dia;

        }

        void setYear(int año){
            year=año;
        }
        int getMonth()const{
            return month;
        }

        int getDay()const{
            return day;
        }

        int getYear()const{
            return year;
        }

        void displayDate(){
            cout<<month<<" / "<<day<<" / "<<year<<endl;
        }
        
    private:

    int month; //mes
    int day;//dia
    int year; //a;o

};