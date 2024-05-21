#include <iostream>
using namespace std;

int main(){
    //OPERADOR DE DIRECCION   &
    cout<<"*Operador de Direccion*"<<endl;
    int y{5};
    int* yPtr{nullptr};

    yPtr=&y;

    cout<<y<<endl; // 5
    cout<<yPtr<<endl; //0x35e05ff7e4
    cout<<&y<<endl;//0x35e05ff7e4
    
    return 0;
}