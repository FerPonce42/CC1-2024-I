#include <iostream>
using namespace std;

int main(){

    int n;
    int posicion{1};
    cout<<"n: ";cin>>n;
    int f1{0};
    int f2{1};
    int f3;
    while(f2<=n){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        ++posicion;
    }
    if(f1==n){
        cout<<n<<"esta en la posicion "<<posicion;
    }else{
        cout<<"tamal"<<endl;
    }
    return 0;
}