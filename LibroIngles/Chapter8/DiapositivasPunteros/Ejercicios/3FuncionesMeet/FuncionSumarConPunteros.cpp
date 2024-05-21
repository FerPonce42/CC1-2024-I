#include <iostream>
using namespace std;

int sum(const int *arr, int tam){
    int sum=0;
    for(int i=0 ; i<tam ; i++ , arr++){
        sum += *arr;
    }
    return sum;
}

int main(){
    int arr[]={1,2,3,4,5};

    cout<<sum(arr,5)<<endl;

    return 0;
}