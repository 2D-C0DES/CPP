#include<iostream>
using namespace std;

fact(int n){
    if(n==0  or n==1 ) 
    return 1;
    return n*fact(n-1);
}
 int main(){

int n;
cout<<"enter the number : ";
cin>>n;
cout<<fact(n);


 }