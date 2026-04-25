// Diamond element
#include<iostream>
using namespace std;

class A
{   int a;
    public:
    A(){  cout<<"A Constructor called ";a=100}
    ~A(){  cout<<"A Destructor called ";}
    void display_A()
    { cout<<"\n Value of a = "<<a;  }
};
class B: virtual public A
{   public:
    B(){  cout<<"B Constructor called ";b=}
    ~B(){  cout<<"B Destructor called ";}
    void display_B()
    { cout<<"\n Value of b = "<<b;  }
};
class C: virtual public A  
{   public:
    C(){  cout<<"C Constructor called ";c=}
    ~C(){  cout<<"C Destructor called ";}
    void display_C()
    { cout<<"\n Value of c = "<<c;  }
};
class D: public B,public C 
{   public:
    D(){  cout<<"D Constructor called ";d=21560}
    ~D(){  cout<<"D Destructor called ";}
};
int main()
{    

   return 0;
}
