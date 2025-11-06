// The Ackermann function A(x,y) is defined for integer x and y by

// A(x,y)= y+1   if x=0; 
//       = A(x-1,1)   if y=0; 
//       = A(x-1,A(x,y-1))   otherwise. 

#include<iostream>
using namespace std;
int ack(int x, int y){
    if(x==0)
    return y+1;
    else if(y==0)
    return ack(x-1,1);
    else return ack(x-1,ack(x,y-1));

}

int main(){
    int m,n;
    cout<<"enter the m : ";
    cin>>m;
    cout<<"enter the n : ";
    cin>>n;

    cout<<ack(m,n);
}