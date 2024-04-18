#include <iostream>
#include <string>
using namespace std;


string stringToUppercase(string cad){
    char c;
    for(int i= 0; i<cad.size() ; i++ ){
        c = cad.at(i);
        cad.at(i);
        int val=static_cast<int>(c);//static cast = encontrar valor numerico.
        if(val>= 97 && val<=122)
            cad.at(i)=c-32;
    }
    return cad;
}



int main(){

    string cad;
    cout<<"Ingrese su cadena en minuscula: ";
    getline(cin,cad);

    cout<<stringToUppercase(cad)<<endl;

    return 0;
}