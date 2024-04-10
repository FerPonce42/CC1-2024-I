/*
Identifique y corrija los errores en cada uno de los siguientes:
a) while ( c <= 5 )
(
 product *= c;
 ++c;
)
b) cout >> value;
c) if ( i == 1 )
 cout << "A" << endl;
 cout << "B" << endl;
else
 cout << "C" << endl;
*/
#include <iostream>
using namespace std;

int main(){

    int c{1};
    int i{1};
    int value;
    int product{1};

    //a
    while(c<=5){
        product*=c;
        ++c;
    }

    //b
    cin>>value;
    //c
    if(i==1){
        cout << "A" << endl;
        cout << "B" << endl;
    }else{
        cout << "C" << endl;
    }


    return 0;
}