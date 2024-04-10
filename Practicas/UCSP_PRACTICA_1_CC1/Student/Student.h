#include <string>
#include <iostream>
using namespace std;

class Student{

    public:
        explicit Student(string n, int a):name(n),age(a){
        
        }

        void setName(string name){
            string nombre=name;

        }
        string getName() const{
            return name;
            
        }

        int setAge(int age) const{
            int a=age;

        }

        int getAge()const{
            return age;
        }

        bool isOlder(int age)const{
            if(age<=18){
                return false;
            }else{
                return true;
            }
        }
    
    private:

        string name;
        int age;



};