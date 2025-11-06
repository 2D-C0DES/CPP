#include<iostream>
using namespace std;
int main(){
    int SP,CP;
    cout<<"enter the selling price :";
    cin>>SP;
    cout<<"neter the cost price :";
    cin>>CP;
    if(SP>CP){
        cout<<"profit"<<endl;
        cout<<"the profit is "<<(SP-CP);
    }
    else if(SP<CP){
        cout<<"loss"<<endl;
        cout<<"the loss is "<<(CP-SP);
    }
    else{
        cout<<"no profit,no loss";
    }




}