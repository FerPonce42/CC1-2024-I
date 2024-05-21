#include <iostream>
using namespace std;

int main(){

    int g=5;
    cout<<&g<<endl; //ACA NORMAL lvalue

    cout<< &5<<endl ; //ERROR! rvalue
    cout<< &(x+y) <<endl; //ERROR es un rvalue

    return 0;
}