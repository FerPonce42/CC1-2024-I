#include <iostream>
#include <string>
using namespace std;

class Date{

    public:

        explicit Date(int month, int day, int year){

            if(month >= 1 && month <= 12){
                month;
            }else{
                month=1;
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