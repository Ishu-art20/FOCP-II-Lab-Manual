// Single Inheritance
#include<iostream>
using namespace std;
class Person   //base class
{   //private 
    string name; int age;
    public:
    Person(){
       cout<<"\n--Person default--";
       name="default";
       age=18;
    }
    Person(string name,int age){
        cout<<"\n--Person Parameterized--";
        this->name=name; 
        (*this).age=age;
    }
    void displayPerson(){
        cout<<"\n Name = "<<name<<"\n Age = "<<age;
    }
};
class Student:public Person    //this line tells whose base/derived class
{   string rollno;
    public:
    Student()
     {  cout<<"\n--Student Default--";
        rollno = "25CSU000";  
     }
    Student(string nm, int ag, string rno):Person(nm,ag){ 
        cout<<"\n--Student Parameterized--";
        rollno=rno;
    }
    void displayStudent(){
        displayPerson();
        cout<<"\n Rollno = "<<rollno;
    }
};
int main()
{ 
   Student p1,p2("Ishu",19,"25CSU092");
   p1.displayStudent();
   p2.displayStudent();
   return 0;
}