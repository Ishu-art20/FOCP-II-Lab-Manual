// class Student
#include<iostream>
#include<string>
using namespace std;
class Student
{   public:
    string rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;
    int Total;
    void inputDetails()
    {
        cout<<"Enter Rollno,Name : ";
        cin>>rollno>>name;
        cout<<"Enter Marks1,Marks2,Marks3 :";
        cin>>marks1>>marks2>>marks3;
    }
    int calculateTotal()
    {   
        Total = marks1+marks2+marks3;
        return Total;  // return marks1+marks2+marks3;
    }
    void displayDetails()
    {
        cout<<"\nName : "<<name<<"\nRollno : "<<rollno<<"\nTotal Marks = "<<Total;
    }
};
int main(){
    Student s1;
    s1.inputDetails();
    s1.calculateTotal();
    s1.displayDetails();
    return 0;
}