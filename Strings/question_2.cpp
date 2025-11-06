//reverse first half of the string 

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a = s.length();

    // int i = 0;
    // int j = a/2 -1;

    // while(i<j){
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }

    reverse(s.begin(),s.begin()+ a/2);

    cout<<s;
}