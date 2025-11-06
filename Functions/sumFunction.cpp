#include<iostream>
using namespace std;
// void sum(int a,int b){    // here a and b are formal parameters
//     cout<<a+b;
// }

int sum(int a,int b){    // here a and b are formal parameters
    return a+b;
}


int main(){
    int a,b;
    cout<<"enter the 1st number : ";
    cin>>a;
    cout<<"enter the 2nd number : ";
    cin>>b;
   cout<<sum(a,b);   // these are called actual parameters
}

