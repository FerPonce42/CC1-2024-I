#include <iostream>
using namespace std;

void print(const int*arr, int tam){
    for(int i=0; i<tam ; i++,arr++){
        cout<<*arr<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};

    print(arr,5);
}