// friend function 
#include<iostream>
using namespace std;

class Rectangle
{   
    int length;
    int width;
    public:
     Rectangle(){  length = 0; width = 0;}
     Rectangle(int l ,int w){  length = l; width = w;}
    void display()
    { cout<<"\n Length = "<<length; 
      cout<<"\n Width = "<<width;
    }
    friend void Area(Rectangle obj);
};
 void Area(Rectangle obj)
    { 
        cout<<"\n Area of rectangle = "<<(obj.width*obj.length);
    }
int main()
{   Rectangle r1,r2(34,40);
    r1.display();
    r2.display();
    Area(r1);
    Area(r2);
    return 0;
}