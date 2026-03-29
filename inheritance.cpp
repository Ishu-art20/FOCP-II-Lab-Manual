// inheritance 
#include<iostream>
using namespace std;
class A
{   
    int var;
    void display_msg()
    {  cout<<"\n Base Class"; }
    public:
    A()
    { cout<<"\n A Default constructor";var=150;}
    void display()
    { cout<<"\n Var = "<<var;  }
};
class B : public A
{
  int var2;
  public:
  B(){ cout<<"\n B default constructor"; var2 = 280;  }
  void display_b(){ cout<<"\n var2 = "<<var2; }
};
int main()
{
    B obj1;
    obj1.display();

    obj1.display_b();
    return 0;
}