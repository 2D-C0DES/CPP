#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][2];

    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            cin>>arr[i][j];
        }
    }


    int mx= INT_MIN;
        for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            mx = max(mx,arr[i][j]);
        }
    }
    cout<<endl;
    cout<<mx;
}