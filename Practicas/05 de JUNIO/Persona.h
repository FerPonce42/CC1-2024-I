#include <iostream>
#include <string>
using namespace std;
//a) Corregir y/o modificar y terminar la implementacion de la clase Persona.
class Persona{
    protected:
        string nombre;
        int edad;
    public:
        Persona(string n, int e):nombre(n),edad(e){}//p-->e

        void setNombre(string n){//arreglé la función que había implementado.
            nombre=n;
        }
        string getNombre() const{
            return nombre;
        }
 
        void setEdad(int e){//arreglé la función que había implementado.
            edad=e;
        }           
        int getEdad() const{
            return edad;
        }
        
        void print() const{//simplifiqué la función print
            cout<<nombre<<" , "<<edad<<endl;
        }


        static void imprimirArreglo(Persona* arreglo[], int tamano) {
            for (int i = 0; i < tamano; ++i) {
                cout << arreglo[i]->getNombre() << " , " << arreglo[i]->getEdad() << endl;
            }
        }
};
