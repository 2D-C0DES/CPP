#include<iostream>
using namespace std;

int main(){
    int prod = 1;
    int arr[5];
    int p = sizeof(arr)/4 ;
    
    for(int i=0;i<p ;i++){
        cin>>arr[i];
    }

    for(int i=0;i<p ;i++){
        prod *= arr[i];
    }

    cout<<"The value of product of the elements is : "<< prod;

}