#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    int mx = arr[0];
   
    for(int j=0;j<=4;j++){
        mx = max(mx,arr[j]);
    }
    
    cout<<mx;
}