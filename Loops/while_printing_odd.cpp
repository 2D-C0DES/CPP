#include<iostream>
using namespace std;
int main(){
int i=1;
// while(i<=10){
//     cout<<i<<" ";
    
//     i+=2;
// }
while(i<=100){
    if(i%2==0){
        continue;
    }
    else{
        cout<<i<<" ";
    }
    i++;
}
}