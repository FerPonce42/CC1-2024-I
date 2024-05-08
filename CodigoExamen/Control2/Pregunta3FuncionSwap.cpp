#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

int main(){
    int x=5;
    int y=10;

    cout<<"Antes: x: "<<x<<"  y: "<<y<<endl;

    swap(x,y);

    cout<<"Despues: x: "<<x<<"  y: "<<y<<endl;

    return 0;
}