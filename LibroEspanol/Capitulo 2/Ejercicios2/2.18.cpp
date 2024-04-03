/*
Escriba un programa que pida al usuario que escriba dos enteros, obtenga los 
numeros del usuario y luego imprima el numero mas grande, seguido de las palabras "es mas grande". Si los nu-
meros son iguales, imprima el mensaje "Estos numeros son iguales"
*/
#include <iostream>
using namespace std;

int main(){

    int ent1,ent2;
    
    cout<<"Ingrese 2 enteros, por favor: ";cin>>ent1>>ent2;

    if(ent1<ent2){
        cout<<ent2<<" Es mas grande"<<endl;
    }
    if(ent1>ent2){
        cout<<ent1<<" Es mas grande"<<endl;
    }
    if(ent1==ent2){
        cout<<ent1<<" y "<<ent2<<" Estos numeros son iguales"<<endl;
    }

    return 0;
}