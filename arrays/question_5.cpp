#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    int arr[n];
    for(int i=0 ; i<=(n-1);i++){
        arr[i] = pow((i+1),2);
    }


    for(int j=0;j<=(n-1);j++){
        cout<<arr[j]<<" ";
    }

    return 0;

}