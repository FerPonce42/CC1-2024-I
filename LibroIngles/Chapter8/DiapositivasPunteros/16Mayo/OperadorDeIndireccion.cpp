#include <iostream>
using namespace std;

int main(){

    int y{5};
    int* yPtr{nullptr};
    yPtr=&y;

    //OPERADOR DE INDIRECCION 
    cout<<"*Operador de Indireccion*"<<endl;
    *yPtr=y;
    cout<<*yPtr<<endl; //5 (valor de y)
    *yPtr=100;
    cout<<*yPtr<<endl; // 100 (nuevo valor que le pones a y)


    return 0;
}