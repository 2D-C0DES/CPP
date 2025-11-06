#include<iostream>
using namespace std;
int main(){

int n,r,c,a,b;
cout<<"enter the number :";
cin>>n;
cout<<"enter the r : ";
cin>>r;
c=n-r;
a =1;
while(n>0){
a=a*n;
n--;
}

b =1;
while(r>0){
b=b*r;
r--;
}

int d =1;
while(c>0){
d=d*c;
c--;
}

cout<<a/(b*d);




}