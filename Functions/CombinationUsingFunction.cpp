#include<iostream>
using namespace std;
int fact(int a){
    int c=1;
    for(int i=1;i<=a;i++){
        c*=i;
    }
    return c;
}
int main(){

int a,b,c,n,r;
cout<<"enter the n : ";
cin>>n;
cout<<"enter the r : ";
cin>>r;
a=fact(n);
b=fact(r);
c=fact(n-r);

cout<<a/(b*c);



}