#include <iostream>
using namespace std;


int main(){

    int entero;

    cout<<"INGRESA EL NUMERO ENTERO: ";cin>>entero;

    // 42339

    int dm,um,c,d,u;

    dm= entero/10000; // 4
    um= (entero-(dm*10000))/1000; // 2
    c= (entero-(dm*10000+um*1000))/100; // 3
    d= (entero-(dm*10000+um*1000+c*100))/10; // 3
    u= (entero-(dm*10000+um*1000+c*100+d*10))/1; // 9

    cout<<dm<<"   "<<um<<"   "<<c<<"   "<<d<<"   "<<u<<endl;
    // 4      2       3      3       9

    return 0;
}