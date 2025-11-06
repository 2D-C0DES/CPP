#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number :";
cin>>n;
int f;
for(int i =1;i<n;i++){
    if(n%i==0){
        f=i;
    }
}
cout<<"the highest factor is :"<<f;

}