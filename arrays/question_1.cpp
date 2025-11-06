#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int arr[5];
    int p = sizeof(arr)/4 ;
    
    for(int i=0;i<p ;i++){
        cin>>arr[i];
    }

    for(int i=0;i<p ;i++){
        sum += arr[i];
    }

    cout<<"The value of sum is : "<< sum;

}