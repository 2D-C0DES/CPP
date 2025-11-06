




#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows: ";
    cin>>m;
    cout<<"enter the number of columns : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
        if(i==1 || i==m || j==1 || j==n) cout<<"*"<<" ";
        else cout<<"  ";

        }
        cout<<endl;
    }

}