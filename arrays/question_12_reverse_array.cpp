#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int p = sizeof(arr)/4;
    for(int i=0;i<=p/2;i++){
        int temp = arr[i];
        arr[i] = arr[p-i-1];
        arr[p-i-1] = temp;
    }

    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}