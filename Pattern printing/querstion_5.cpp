




#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows: ";
    cin>>m;
    // cout<<"enter the number of columns : ";
    // cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }

}