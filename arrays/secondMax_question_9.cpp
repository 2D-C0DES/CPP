#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    for(int i=0;i<=4;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    int smax = arr[0];

    for(int j=0;j<=4;j++){
        if(arr[j]!= mx){
            smax = max(smax,arr[j]);
        }
    }

    cout<<endl<<smax;
    return 0;

}22
99
24
35
16