#include<iostream>
using namespace std;

void print( int n){
    if(n==0) return;
    print(n-1);    // here it can not return any value for being a void function 
    cout<<n<<endl;
    
}
int main(){

int a ;
cout<<"enter the number : ";
cin>> a;
print(a);




}