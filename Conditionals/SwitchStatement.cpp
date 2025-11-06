#include<iostream>
using namespace std;
int main(){     
    int a,b;        // another rerplacement for if_else
    cin>>a;
    char op;    //operator
    cin>>op;
    cin>>b;
    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<< a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<< "Invalid operator";
    }




}