#include <iostream>
using namespace std;

int fibonacciRecursivo(int n){
    if(n == 1  || n ==0 ){ // PASO BASE
        return 1;
    }else{
        return fibonacciRecursivo(n-2) + fibonacciRecursivo(n-1);   //PASo RECURSIVO
    }
}

int main(){
    int numero;
    cout<<"Ingresa el numero: ";cin>>numero;
    cout<<"Fibonacci Recursivo es: "<<fibonacciRecursivo(numero)<<endl;


    return 0;
}