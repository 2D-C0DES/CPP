#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }

    for(int j=0;j<=4;j++){
       if(j%2==0) 
       arr[j]*=2;
       else   
       arr[j]+=10;
           }
    for(int k=0;k<=4;k++){
        cout<<arr[k]<<endl;
    }

    return 0;

}