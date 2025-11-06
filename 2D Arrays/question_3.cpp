#include<iostream>
using namespace std;
int main(){
    int arr_1[5][5];
    int arr_2[5][5];


    for(int i=0;i<=4;i++){
        for(int j=0 ; j<=4;j++){
            cin>>arr_1[i][j];
        }
    }

        for(int i=0;i<=4;i++){
        for(int j=0 ; j<=4;j++){
            cin>>arr_2[i][j];
        }
    }


    int arr_3[5][5];

    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j] ;
        }
    }




            for(int i=0;i<=4;i++){
        for(int j=0 ; j<=4;j++){
            cout<<arr_3[i][j]<<" ";
        }
        cout<<endl;
    }




}