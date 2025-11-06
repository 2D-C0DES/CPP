




#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows: ";
    cin>>m;
    // cout<<"enter the number of columns : ";
    // cin>>n;
    for(int i=1;i<=m;i++){
       if(i%2==0){
        for(int p=1;p<=i;p++){
            cout<<(char)(p+64)<<" ";
        }
        }

        else{
            for(int j=1;j<=i;j++)
            cout<<j<<" ";
            }
        
        cout<<endl;
    }

}