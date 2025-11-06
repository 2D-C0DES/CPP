#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr_1[n];
    cout<<"enter the elements of the array : "<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr_1[i];
    }
    int arr_2[n];
    int count = 0;


    for (int i=0 ;i<=4;i++){
        arr_2[4-i] =  arr_1[i];
    }

    for(int i=0;i<=4;i++){
        if(arr_1[i]== arr_2[i]){
            count++;
        }

    }

    if(count==n){
        cout<<"it is a palindrome";
    }
}