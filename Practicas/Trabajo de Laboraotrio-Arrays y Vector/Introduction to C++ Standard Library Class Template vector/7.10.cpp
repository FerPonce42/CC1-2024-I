#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;
//mostrar el vector
void outputVector(const vector<int>&);
//Ingresa valores a vector
void inputVector(vector<int>&);


int main(){

    vector<int> integers1(7);
    vector<int> integers2(10);

    //Imprime tamaño y contenidos de integers1
    cout<<"Size of vector integers1 is "<<integers1.size()<<"\nvector after initialization: "; outputVector(integers1);

    //Imprime tamaño y contenidos de integers1
    cout<<"Size of vector integers2 is "<<integers2.size()<<"\nvector after initialization: "; outputVector(integers2);

    //Ingresa e imprime integers 1 y 2
    cout<<"\nEnter 17 integers: "<<endl;
    inputVector(integers1);
    inputVector(integers2);

    cout<<"\nAfter input, the vector contain:\n"<<"integers1: ";
    outputVector(integers1);
    cout<<"integers2: ";
    outputVector(integers2);

    // usa el operador de desigualdad (!=) con objetos vectoriales
    cout<<"\nEvaluating: integers1 != integers2"<<endl;

    if(integers1 != integers2){
        cout<<"integers1 and integers 2 are not equal"<<endl;
    }

    
    // crea vectores enteros3 usando enteros1 como
    // inicializador; tamaño de impresión y contenido
    vector<int> integers3{integers1};//CONSTRUCTOR COPIA

    cout<<"\nSize of vector integers3 is "<<integers3.size()
        <<"\nvector aferte initialization: ";
    outputVector(integers3);

    // usar operador de asignación sobrecargada (=)
    cout<<"\nAssigning integers2 to integers1:"<<endl;
    integers1 = integers2;

    cout<<"integers1: ";
    outputVector(integers1);
    cout<<"integers2: ";
    outputVector(integers2);

    // usa el operador de igualdad (==) con objetos vectoriales
    cout<<"\nEvaluating: integers1 == integers2"<<endl;
    if(integers1 == integers2){
        cout<<"integers1 and integers2 are equal"<<endl;
    }

    // usa corchetes para usar el valor en la ubicación 5 como valor r
    cout<<"\nintegers1[5] is "<<integers1[5];

    // usa corchetes para crear lvalue
    cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
    integers1[5]=1000;
    cout<<"integers1: ";
    outputVector(integers1);

    // intento utilizar un subíndice fuera de rango
    try{
        cout<<"\nAttempt to display integers1.at(15)"<<endl;
        cout<<integers1.at(15)<<endl;//ERROR -> fuera de rango
    }
    catch(out_of_range& ex){
        cerr<<"An exception occurred: "<<ex.what()<<endl;
    }

    // cambiar el tamaño de un vector
    cout<<"\nCurrent integers3 size is: "<<integers3.size()<<endl;
    integers3.push_back(1000);  // agrega 1000 al final del vector
    cout<<"New integers3 size is: "<<integers3.size()<<endl;
    cout<<"integers3 now contains: ";
    outputVector(integers3);

}


// contenido del vector de salida
void outputVector(const vector<int>&items){
    for(int item : items){
        cout<<item<<" ";
    }
    cout<<endl;
}

// contenido del vector de entrada
void inputVector(vector<int>& items){
    for(int& item : items){
        cin>>item;
    }
}


























