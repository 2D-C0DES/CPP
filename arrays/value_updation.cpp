#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,56,7,3,55};

    arr[2] =746;        // arrays are always passed by reference

for(int j=0;j<=4;j++){
        cout<<arr[j]<<" ";
    }
}