#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum_even=0;
    int sum_odd=0;
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=4;i++){
        if(i%2==0){
            sum_even+=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }

    for(int j=0;j<=4;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    cout<<"the difference between even_sum and odd_sum is : "<<(sum_even - sum_odd);
    return 0;

}