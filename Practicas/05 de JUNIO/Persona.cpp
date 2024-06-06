#include <iostream>
#include <algorithm>
#include "Persona.h"
using namespace std;

int main(){
//b) En la funcion principal usando asignacion dinamica de memoria, crear un arreglo de 10 elementos.
    Persona* personadinamica[10]; //Aca mantuve la idea, solo quité algo demás.

// c) Asignar valores a cada elemento del arreglo.
    personadinamica[0]=new Persona("Persona1",10);
    personadinamica[1]=new Persona("Persona2",11);
    personadinamica[2]=new Persona("Persona3",12);
    personadinamica[3]=new Persona("Persona4",13);
    personadinamica[4]=new Persona("Persona5",14);//aqui si cambié la idea, pues pensé que el new se inicializaba para todo.
    personadinamica[5]=new Persona("Persona6",15);
    personadinamica[6]=new Persona("Persona7",16);
    personadinamica[7]=new Persona("Persona8",17);
    personadinamica[8]=new Persona("Persona9",18);
    personadinamica[9]=new Persona("Persona10",19);

//d) Crear un puntero ptr e imprimir los elementos del arreglo usando el puntero desde el ultimo elemento(SIN USAR LA FUNCION PRINT)
    Persona* ptr;
    cout<<"Ultimo a primer elemento: "<<endl;
    for(int i=9 ; i>=0 ; --i){
        ptr=personadinamica[i];
        cout<<ptr->getNombre()<<" , "<<ptr->getEdad()<<endl;
    }
//e) Usando el puntero, imprimir los elementos con indice impar.
    cout<<"Indice impar: "<<endl;
    for(int i=1 ; i<10 ; i+=2){
        ptr=personadinamica[i];
        cout<<ptr->getNombre()<<" , "<<ptr->getEdad()<<endl;
    }
//f) Liberar memoria:
   // for (int i = 0; i < 10; ++i) {
        //delete personadinamica[i];
    //}
//g)Impllementar una fincion que imprima los elementos del arreglo.
    cout << "Funcion Imprimir del arreglo:" << endl;
    Persona::imprimirArreglo(personadinamica, 10); //ACA YA EXISTIRIA MEMORY LEAK, PORQUE YA LIBERE MEMORIA.

//h) ordenar los elementos del arreglo tomando como  criterio la edad.
    sort(personadinamica, personadinamica + 10, [](Persona* a, Persona* b) {
        return a->getEdad() < b->getEdad();
    });
    cout << "Arreglo ordenado por edad:" << endl;
    Persona::imprimirArreglo(personadinamica, 10);

//i) ordenar los elementos del arreglo tomando como criterio la nombre.
    struct ComparadorNombre {
        bool operator()(Persona* a, Persona* b) const {
            return a->getNombre() < b->getNombre();
        }
    };
    sort(personadinamica, personadinamica + 10, ComparadorNombre());
    cout << "Arreglo ordenado por nombre:" << endl;
    Persona::imprimirArreglo(personadinamica, 10);

    return 0;
}