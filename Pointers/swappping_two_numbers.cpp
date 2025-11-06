#include<iostream>
using namespace std;
void swap(int& a,int& b){
    int temp=a;
    a =b;
    b= temp;

    cout<<a<<" "<<b;
}
int main(){
int a,b;
cout<<"enter the 1st number : ";
cin>>a;
cout<<"enter the 2nd number : ";
cin>>b;

swap(a,b);        // pass  by value


}