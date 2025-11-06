#include<iostream>
#include<cstring>
using namespace std;
int main(){

string s ="Debanjan";
cout<<s;
s[6] = 'o';
cout<<endl<<s;     //updation

 cout<<endl<<s.length() ;
//cout<< endl<<s.size() ;

return 0;
}