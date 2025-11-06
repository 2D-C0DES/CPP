#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    int mx = INT_MAX;
    for(int i=0;i<=4;i++){
        mx = min(mx,arr[i]);
    }
    int smin = INT_MAX;

    for(int j=0;j<=4;j++){
        if(arr[j]!= mx){
            smin = min(smin,arr[j]);
        }
    }
    cout<<endl<<mx;
    cout<<endl<<smin;
    return 0;

}