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


    int mn= INT_MAX;
        for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            mn = min(mn,arr[i][j]);
        }
    }
    cout<<endl;
    cout<<mn;
}