#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"entert the length :";
    cin>>l;
    cout<<"enter the breadth :";
    cin>>b;
    int a =(l*b);
    int p = 2*(l+b);


    if(p>a){
        cout<<"perimeter is greater than area";
    }
    else if(p<a){
        cout<<"perimeter is less than area";
    }
    else{
        cout<<"perimeter and area are same";
    }
}