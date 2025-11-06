#include<iostream>
#include<string>

using namespace std;

class person{
    public:
    string name;
    int age;

    person(){
        cout<<"Hi, I am the parent cconstructor"<<endl;
    }

    person(string name, int age){
        this->name = name;
        this->age = age;
    }
    


};

class student : public person{
public:
    int roll_no;
    


    student(string name,int age,int roll_no): person(name, age){

        cout<<"Hi, I am the child cconstructor"<<endl;
        this->roll_no = roll_no;
    }

   
        
    



};


class grad_student:public student{

public:
    string research_area;

    grad_student(string name,int age,int roll_no,string research_area):student(name,age,roll_no){
        this->research_area = research_area;
    }

    void get_info(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll_no :"<<roll_no<<endl;
        cout<<"research_area :"<<research_area<<endl;
    }

};



int main(){

    //student s1("Debanjan Das",21,6358);
    // s1.name = "Debanjan Das";
    // s1.age = 21;
    // s1.roll_no = 1020;

    //s1.get_info();

    grad_student s1("Debanjan Das",45,83732,"machine learning");
    s1.get_info();


    return 0;
} 