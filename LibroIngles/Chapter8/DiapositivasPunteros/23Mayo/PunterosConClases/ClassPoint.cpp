#include "ClassPoint.h"

int main(){
    Point p(4,5);
    Point *ptr=&p;
    Point q;
    p.print();
    (*ptr).print();
    ptr->print(); //OPERADOR FLECHITA, SOLO FUNCIONA CON PUNTEROS -OBJETOS-
    //Flecha, para punteros.
    q.print();


    Point arr[2];
    arr[0].print();

    Point *ptr=arr;
}