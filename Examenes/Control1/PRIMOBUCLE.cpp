#include <iostream>
using namespace std;

int main(){

    int n;
    int contador{0};
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            contador++;
        }
    }

    if(contador==2){
        cout<<"Es primo"<<endl;

    }else{
        cout<<"No es primo"<<endl;
    }
    return 0;
}