#include <iostream>
using namespace std;

int main(){

    int numero,original,reverso{0},digito;

    cout<<"Introduce el numero: ";cin>>numero;

    original=numero;

    while(numero!=0){
        digito=numero%10;
        reverso=reverso*10+digito;
        numero/=10;

    }

    if(original==reverso){
        cout<<"Es palindromo"<<endl;
    }else{
        cout<<"No es palindromo"<<endl;
    }


    return 0;
}