#include<iostream>
using namespace std;

void print( int n){
    if(n==0) return;    // here it can not return any value for being a void function 
    cout<<n<<endl;
    print(n-1);
}
int main(){

int a ;
cout<<"enter the number : ";
cin>> a;
print(a);




}