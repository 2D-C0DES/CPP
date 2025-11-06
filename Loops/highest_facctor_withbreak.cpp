#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number :";
cin>>n;
int f;
for(int i=n/2;i>=1;i--){
    if(n%i==0){
        f=i;
        break;
    }
}
cout<<"the highest factor is :"<<f;

}