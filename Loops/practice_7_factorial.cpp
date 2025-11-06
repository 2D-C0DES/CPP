#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the number :";
cin>>n;
int fact =1;
while(n>0){
fact=fact*n;
n--;
}
cout<<"factorial of the given number is "<<fact;




}