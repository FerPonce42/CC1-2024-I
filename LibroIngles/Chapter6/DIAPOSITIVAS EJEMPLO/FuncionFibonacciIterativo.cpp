#include <iostream>
using namespace std;

int numerosFibonacci(int n){

    int n1{1},n2{1},n3{1};

    for(int i = 1 ; i<=n ; ++i ){
        if( i== 1 ){
            continue;
        }
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;

}

int main(){
    int numero;
    cout<<"Ingresa el numero: ";cin>>numero;

    cout<<"Su Fibonacci es: "<<numerosFibonacci(numero)<<endl;
}

