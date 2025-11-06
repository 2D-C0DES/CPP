#include<iostream>
using namespace std;
int comb(int x,int y){
    int a=1;
    int c = x-y;
    for(int i=1;i<=x;i++){
        a*=i;
    }
    int b=1;
    for(int i=1;i<=y;i++){
        b*=i;
    }
    int d=1;
    for(int i=1;i<=c;i++){
        d*=i;
    }

    int e = a/(b*d);
    return e;

    

}
int main(){

int n,r;
cout<<"enter the n : ";
cin>>n;
// cout<<"enter the r : ";
// cin>>r;

for(int i=0;i<n;i++){

    for(int p=0;p<n-i;p++){
        cout<<"  ";
    }
    for(int j=0;j<i;j++){
        cout<<comb(i,j)<<" ";
    }
    cout<<endl;
}




}



