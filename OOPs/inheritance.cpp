 
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

    void get_info(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll_no :"<<roll_no<<endl;
        
    }



};

int main(){

    student s1("Debanjan Das",21,6358);
    // s1.name = "Debanjan Das";
    // s1.age = 21;
    // s1.roll_no = 1020;

    s1.get_info();

    return 0;
} 


// mode of inheritence table

//              Derived Class     Derived Class      Derived Class
//              (private mode)    (protected mode)  (pubblic mode)
// base  class
// private       not inherited     not inherited     not inherited
// protected     private            protected        protected
// public        public             public           public