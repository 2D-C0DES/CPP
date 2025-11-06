#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    if(n%5==0  or n%3==0){                 // or can be used instead of || operartor
        cout<<"the number is divisible by 5 or 3";
    
    }
    else{
        cout<<"the number is not divisible by 5 or 3";
    }
}