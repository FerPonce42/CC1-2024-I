#include <string>

class Account{

    public:
        void setName(std::string nombreCuenta){
            nombre=nombreCuenta;
        }
        std::string getName()const{
            return nombre;
        }
    private:
        std::string nombre;
    
};
