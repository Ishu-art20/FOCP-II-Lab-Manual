// multiple inheritance
/*Create two classes: Employee with name, and Department with department name.
Derive a class Manager that displays both employee name and department.
Demonstrate usage through object creation.*/
#include<iostream>
using namespace std;

class Employee
{   protected : 
    string name;
    public:
    Employee(){ name = "NIL";}
    Employee(string nam){name = nam;}
};
class Department
{   protected : 
    string dep_name;
    public:
    Department(){ dep_name = "NIL";}
    Department(string dnam){dep_name = dnam;}
};
class Manager:public Employee , public Department
{   public:
    Manager():Employee(),Department() { }
    Manager(string N,string DN):Employee(N),Department(DN) { }
    void display()
    {
        cout << "\nEmployee Name = " << name;
        cout << "\nDepartment Name = " << dep_name; 
    }
};
int main(){
    Manager m1; Manager m2("Ishu","Science");
    m1.display();
    m2.display();
    return 0;
}