#include<iostream>
using namespace std;
int main(){
int x =45;
int count=0;

int arr[5];
for(int i=0;i<=4;i++){
    cin>>arr[i];
}

for(int i=0;i<=4;i++){
if(arr[i]>x){
    count++;
}



}
cout<<endl<<count;



}