#include <iostream>
using namespace std;

class Rectangulo{

    public:
        Rectangulo(double l, double a): largo(l), ancho(a){}

        friend double calcularArea(const Rectangulo&rect);

    private:
        double largo;
        double ancho;
};

double calcularArea(const Rectangulo&rect){
    return rect.largo*rect.ancho;
}

int main(){

    Rectangulo miRectangulo(5.0,3.0);

    cout<<"El area es: "<<calcularArea(miRectangulo)<<endl;


    return 0;

}