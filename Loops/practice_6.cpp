#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number :";
cin>>n;
int reverse =0;
int current = n;
while(n!=0){
    int ld =(n%10);
    reverse = reverse*10 + ld;

    n =n/10;

}

cout<<"the sum of the given and reversed number is :"<<reverse + current<<endl;




}