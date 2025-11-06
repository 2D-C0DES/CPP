#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number :";
cin>>n;
int reverse =0;
int ld;   
int product =1  ;   
while(n!=0){
    int ld =(n%10);
    reverse = reverse*10 + ld;

    n =n/10;

}
cout<<"the reversed number is :"<<reverse<<endl;




}