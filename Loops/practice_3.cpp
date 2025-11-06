#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number :";
cin>>n;
int count =0;
int ld;   
int product =1  ;     // there won't be any 0 in the number
while(n!=0){
    product*=(n%10);
    n =n/10;
    
    count++;
}
cout<<"the number of digits in the entered number :"<<count<<endl;
cout<<"the product of the digits is "<<product<<endl;



}