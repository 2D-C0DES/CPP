// constructor

#include<iostream>
#include<string>

using namespace std;


class teacher{
    //properties
    
    //there are three access modifiers =>public,private(default setting),protected
private:
    double salary;  //data hiding
    string name;
    string dept;
    string subject;
    
public:
    
    //non parameterised
    // teacher(){
    //     cout<<"hi, I'm a  constructor\n";
    // }

    // parameterised     // existence same name constructor in a class is called constructor overloading
                         // which is a good example of polymorphism   
    // teacher(string n,string d,string s,double sal){
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    //     }

    teacher(string name,string dept,string subject,double salary){
       this-> name = name;   //this pointer points the current object
       this->dept = dept;
       this->subject = subject;
       this->salary = salary;
        }


    //copy constructor
    teacher(teacher &org_obj){
        cout<<"Hi, I am copy constructor...."<<endl;
        this->name = org_obj.name;
        this->dept = org_obj.dept;
        this->salary = org_obj.salary;
        this->subject = org_obj.subject;

    }


    void get_info(){
        cout<<"name :"<<name<<endl;
        cout<<"department :"<<dept<<endl;
        cout<<"subject :"<<subject<<endl;
        cout<<"salary :"<<salary<<endl;
    }


};
 

int main(){

    // teacher t1;  //constructor called
    // t1.name = "Debanjan Das";
    // t1.subject = "Object Orieneted Programming";
    // t1.dept="Information Technology";
    // // t1.salary = 90786;
    // t1.set_salary(73736);


    teacher t1("Debanjan Das","Information Technology","Oops",7273);
    //t1.get_info();


    teacher t2(t1); // custom copy constructor called
    t2.get_info();


    return 0;

}
