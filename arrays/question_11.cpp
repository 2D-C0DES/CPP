#include<iostream>
using namespace std;
int main(){
    int arr_1[] = {1,2,3,4,5};
    int arr_2[5];


    for (int i=0 ;i<=4;i++){
        arr_2[4-i] =  arr_1[i];
    }

    for(int i=0;i<=4;i++){
        cout<<arr_2[i]<<" ";
    }
}