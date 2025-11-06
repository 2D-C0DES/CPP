// Encapsulation

#include<iostream>
#include<string>

using namespace std;


class teacher{
    //properties
    
    //there are three access modifiers =>public,private(default setting),protected
private:
    double salary;  //data hiding

public:
    string name;
    string dept;
    string subject;
    

    //methods/memeber function
    void change_dept(string new_dept){
        dept = new_dept;
    }
    //setter function
    void set_salary(int new_salary){
        salary = new_salary;
    }
    //getter function
    int get_salary(){
        return salary;
    }


};


int main(){

    teacher t1;
    t1.name = "Debanjan Das";
    t1.subject = "Object Orieneted Programming";
    t1.dept="Information Technology";
    // t1.salary = 90786;
    t1.set_salary(73736);


    cout<< t1.name <<endl;
    cout<< t1.dept <<endl;
    cout<< t1.subject <<endl;
    cout<< t1.get_salary() <<endl;

    return 0;

}
