//reverse first half of the string 

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a = s.length();


    reverse(s.begin() +1,s.begin()+ 5);

    cout<<s;
}