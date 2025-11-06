
#include<iostream>
#include<string>

using namespace std;

class student{
    public:
    string name;
    float *cgpaptr;

    student(string name, float cgpa){ //parameterised constructor
        this->name = name;
        cgpaptr = new float;
        *cgpaptr = cgpa;
    }

    student(student &obj){  // copy constructor
        this->name = obj.name;
        cgpaptr = new float;
        *cgpaptr = *obj.cgpaptr;
    }

    void get_info(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*(cgpaptr)<<endl;
    }

};


int main(){
    // student s1("Debanjan Das",9.78);
    // s1.get_info();


    // student s2(s1);      //cases of shallow copy
    // *(s2.cgpaptr) = 6.7;
    // s1.get_info();

    student s1("Debanjan Das",9.78);
    s1.get_info();


    student s2(s1);      //cases of deep copy
    *(s2.cgpaptr) = 6.7;
    s2.name = "raka khan";
    s2.get_info();

    return 0;
}