#include<iostream>
using namespace std;

int maxoftwo(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
     int x,y;
     cout<<"enter the 1st number : ";
     cin>>x;
     cout<<"enter the 2nd number : ";
     cin>>y;

     cout<<maxoftwo(x,y);
}