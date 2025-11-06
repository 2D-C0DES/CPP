#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number :";
cin>>n;
int count =0;
int p=0;
while(n!=0){
    p+=(n%10);
    n =n/10;

    count++;
}
cout<<"the number of digits in the entered number :"<<count<<endl;
cout<<"the sum of the digits is "<<p<<endl;



}