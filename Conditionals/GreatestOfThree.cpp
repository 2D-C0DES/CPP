#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first number :";
    cin>>a;
    cout<<"enter the second number :";
    cin>>b;
    cout<<"enter the third number :";
    cin>>c;

    if(a>b && a>c){
        cout<<a<<" is the gretest number";
    }
    else if(b>a && b>c){
        cout<<b<<" is the gretest number";
    }

    else{
        cout<<c<<" is the gretest number";
    }





}