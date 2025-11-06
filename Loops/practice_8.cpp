#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the number :";
cin>>n;
for(int i=1;i<=n;i++){
    int fact =1;
    if(i==1){
    cout<<"factorial of 1 is "<<1<<endl;
    continue;
    }
    
    else{
        int s=i;
        int j=1;
        while(j<=i){
        
fact=fact*j;
j++;
}
cout<<"factorial of "<<s<<" is "<<fact<<endl;
}

}





}