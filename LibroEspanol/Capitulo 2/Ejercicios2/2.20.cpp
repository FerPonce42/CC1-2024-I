/*
Escriba un programa que lea el radio de un circulo como un entero e imprima el  diametro del circulo,
la circunferencia y el area. Use el valor constante 3.14159 para π. Realice todos los calculos en instrucciones de salida.
*/
    #include <iostream>
    using namespace std;

    int main(){

        int radio;
        cout<<"RADIO: ";cin>>radio;

        float pi=3.14159;

        float diametro= 2*radio;
        float circunferencia= 2*pi*radio;
        float area= pi*(radio*radio);

        cout<<"Diametro: "<<diametro<<endl;
        cout<<"Circunferencia: "<<circunferencia<<endl;
        cout<<"Area: "<<area<<endl;

        return 0;
    }