#include<iostream>
#include<string>

using namespace std;

class student{
    public:
    string name;
    int age;

};
class teacher{
    public:
    string subject;
    double salary;


};

class teaching_assistant:public student,public teacher{
public:
    string research_area;


};


int main(){

    teaching_assistant t1;
    t1.name = "debanjan das";
    t1.salary = 73637;

    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    return 0;
}
