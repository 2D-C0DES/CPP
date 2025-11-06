#include<iostream>
using namespace std;
int main(){
    string p;
    getline(cin,p);
    int s = p.length();

    for(int i=0;i<s;i++){
        if(i%2==0){
            p[i] = 'a';
        }

    }

    cout<<p;
}