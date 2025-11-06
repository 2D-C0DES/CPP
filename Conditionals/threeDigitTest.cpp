#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    if (n<1000 and n>99){             //and can be used instead of && operator
        cout<<"this is a three digit number";
    }
    else{
        cout<<"this is not a three digit number";
    }
}