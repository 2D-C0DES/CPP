#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first side :";
    cin>>a;
    cout<<"enter the second side :";
    cin>>b;
    cout<<"enter the third side :";
    cin>>c;

    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"the triangle is valid";

    }
else{
    cout<<"thr trianggle is not valid";
}

}