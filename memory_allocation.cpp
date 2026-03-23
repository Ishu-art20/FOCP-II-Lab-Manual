//  static/dynamic memory allocation 
#include<iostream>
using namespace std;
class A
{   
    int a1,a2;
    public:
    A(){ cout<<"\n Default";
          a1=0;a2=0;  }
    A(int a1, int a2)
    {   this-> a1 = a1 ; // (*this).a1=a1;
        this-> a2 = a2;
    }
    void display()
    { cout<<"\n a1 = "<<a1<<"\n a2 = "<<a2; }
};
int main()
{
    A obj1,obj2(34,56);  //Static memory allocation
    A *obj4= new A();    //dymanic memory allocation
    A *obj5= new A(456, 876);
    obj1.display();
    obj2.display();
    obj4->display();
    obj5->display();
    return 0;
}