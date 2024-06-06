#include <iostream>
#include <string>

using namespace std;

class Persona{
    public:
        void setName(string nombre){
            this->nombre=nombre;
        }

        string getName()const{
            return this->nombre;
        }
    private:
        string nombre;
};

int main(){
    Persona persona1;
    persona1.setName("Fernando");
    cout<<persona1.getName()<<endl;

    return 0;
}